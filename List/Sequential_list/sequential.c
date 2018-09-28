#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sequential.h"

SeqList* SeqList_Create(int capacity){

  int ret;
  Tseqlist* ptemp = NULL;
  ptemp = (Tseqlist*)malloc(sizeof(Tseqlist));

  if (ptemp == NULL){
    ret = 1;
    printf("func SeqList_Create Error: %d\n", ret);
    return NULL;
  }

  memset(ptemp, 0, sizeof(Tseqlist));
  ptemp->capacity = capacity;
  ptemp->length = 0;
  ptemp->node = (int*)malloc(sizeof(SeqList*));
  memset(ptemp->node, 0, sizeof(SeqList*)*capacity);

  if (ptemp == NULL){
    ret = 2;
    printf("func SeqList_Create Error: %d\n", ret);
    return NULL;
  }

  return ptemp;
}

int SeqList_Capacity(SeqList* list){
  Tseqlist* ptemp = NULL;
  if (list == NULL){
    return -1;
  }
  ptemp = (Tseqlist*)list;
  return ptemp->capacity;

}

int SeqList_Length(SeqList* list){
  Tseqlist* ptemp = NULL;
  if (list == NULL){
    return -1;
  }
  ptemp = (Tseqlist*)list;
  return ptemp->length;
}

//删除元素
int SeqList_Insert(SeqList* list, SeqListNode*  node, int pos){
  int i;
  Tseqlist* ptemp = NULL;

  if (list == NULL){
    return -1;
  }

  ptemp = (Tseqlist*)list;
  //如果顺序表已满
  if (ptemp->length == ptemp->capacity){
    return -2;
  }

  if(pos > ptemp->length){
    pos = ptemp->length;
  }

  for(i=ptemp->length; i>pos; i--){
    ptemp->node[i] = ptemp->node[i-1];
  }

  ptemp->node[i] = (int*)node;
  ptemp->length++;
  return 0;
}
