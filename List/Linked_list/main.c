#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <python.h>
#include "unit.h"
#define max_name 20

typedef struct _Student{

  char* name;
  int score;

}Student;

int main(int argc, char const *argv[]) {

  int i;
  Header *pHeader = Create_Unit();

  Student *student = NULL;
  student = (Student*) malloc (sizeof(Student));
  student->name = "SKY";
  student->score = 100;

  Insert_Unit(pHeader, student);
  Print_Unit(pHeader);
  Destroy_Unit(pHeader);
  Print_Unit(pHeader);

  return 0;
}
