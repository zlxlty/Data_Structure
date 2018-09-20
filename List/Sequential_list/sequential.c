#include <stido.h>
#include <stdlib.h>
#include <string.h>
#include "sequential.h"

typedef struct _tag_seqlist{

  int capacity;
  int length;
  int* node;

}Tseqlist;

SeqList* SeqList_Create(int capacity){

  int ret;
  Tseqlist* ptemp = NULL;
  ptemp = (Tseqlist*)malloc(sizeof(Tseqlist));

  if (ptemp == NULL){
    ret = 1;
    printf("func SeqList_Create Error: %d\n", ret);
    return NULL;
  }

  memset(temp, 0, sizeof(Tseqlist));
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
