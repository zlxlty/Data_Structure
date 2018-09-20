#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _Teacher{

    char name[32];
    int age;

}Teacher;

int main(int argc, char const *argv[]) {

  printf("%d\n", (int)sizeof(Teacher*));

  return 0;
}
