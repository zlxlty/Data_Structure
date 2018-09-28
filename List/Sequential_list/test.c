#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sequential.h"
#define teacher_num 10

typedef struct _Teacher{

    char name[32];
    int age;

}Teacher;

int main(int argc, char const *argv[]) {

  int ret1;

  SeqList* pteacher = SeqList_Create(teacher_num);

  Teacher T1;
  memset(T1.name, '\0', sizeof(T1.name));
  strcpy(T1.name, "SkyLu");
  T1.age = 17;

  ret1 = SeqList_Insert(pteacher, (SeqListNode*)&T1, 0);
  printf("a\n");
  // printf("SeqList Capacity:%d\n", SeqList_Capacity(pteacher));
  // printf("SeqList Length:%d\n", SeqList_Length(pteacher));
  //
  // Teacher* pnode = (Teacher*)malloc(sizeof(Teacher));
  // pnode = (Teacher*)pteacher->node[0];
  // printf("%s\n", pnode->name);

  return 0;
}
