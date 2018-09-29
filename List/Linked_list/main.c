#include <stdio.h>
#include <string.h>
// #include <python.h>
#include "unit.h"
#define max_name 20

int main(int argc, char const *argv[]) {

  int i;
  Header *pHeader = Create_Unit();

  Insert_Unit(pHeader, 'a');
  Insert_Unit(pHeader, 'b');
  Print_Unit(pHeader);
  Unit *pfound = Find_Unit(pHeader, 'b');
  pfound->letter = 'c';
  Print_Unit(pHeader);

  char alpha[8] = {"ABCDEFG"};

  for(i=0; i<7; i++){

    Insert_Unit(pHeader, alpha[i]);

  }

  Print_Unit(pHeader);
  Destroy_Unit(pHeader);
  Print_Unit(pHeader);

  return 0;
}
