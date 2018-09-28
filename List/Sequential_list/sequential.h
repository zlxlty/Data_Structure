#ifndef _SEQUENTIAL_H_
#define _SEQUENTIAL_H_

typedef struct _tag_seqlist{

  int capacity;
  int length;
  int* node;

}Tseqlist;

typedef void SeqList;
typedef void SeqListNode;

SeqList* SeqList_Create(int capacity);
int SeqList_Capacity(SeqList* list);
int SeqList_Length(SeqList* list);
int SeqList_Insert(SeqList* list, SeqListNode*  node, int pos);


#endif
