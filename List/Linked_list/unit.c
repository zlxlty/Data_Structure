#include <stdio.h>
#include <stdlib.h>
#include "unit.h"


Header* Create_Unit(){

  Header *pHeader = (Header*) malloc (sizeof(Header));
  if ( pHeader == NULL ){
    printf("Error when creating Header!");
  }
  pHeader->length = 0;
  pHeader->down = NULL;

  return pHeader;

}

void Insert_Unit(Header *pHeader, char lttr){

  Unit *pUnit = (Unit*) malloc (sizeof(Unit));
  pUnit->letter = lttr;

  if ( pHeader->length == 0 ){

    pHeader->down = pUnit;
    pUnit->down = NULL;

  }else{

    Unit *ptemp = pHeader->down;

    while ( ptemp->down != NULL ){
      ptemp = ptemp->down;
    }

    ptemp->down = pUnit;
    pUnit->down = NULL;

  }

  pHeader->length ++;

}

int Print_Unit_Length(Header *pHeader){
  return pHeader->length;
}

void Print_Unit(Header *pHeader){

  if ( pHeader->length == 0 ){
    printf("The chain is EMPTY!\n");
  }else{

    Unit *ptemp = pHeader->down;

    if ( ptemp != NULL ){
      while ( ptemp != NULL ){
        printf("%c\n", ptemp->letter);
        ptemp = ptemp->down;
      }
    }else{
      printf("Empty!\n");
    }
  }
}

Unit* Find_Unit(Header *pHeader, char val){

  if ( pHeader == NULL ){
    printf("Header is Empty!");
    return NULL;
  }

  Unit *ptemp = pHeader->down;
  do{

    if (ptemp->letter == val){
      return ptemp;
    }else{
      ptemp = ptemp->down;
    }
  }while (ptemp != NULL);

  printf("Can`t find the letter");
  return NULL;
}

void Destroy_Unit(Header *pHeader){

  if ( pHeader->length == 0 ){
    printf("The chain is EMPTY!\n");
  }else{

    Unit *ptemp = pHeader->down;

    while ( ptemp->down != NULL ){
      Unit *pexchange = ptemp->down;
      free(ptemp);
      // printf("Successfully removed!\n");
      ptemp = pexchange;
    }

    pHeader->down = NULL;
    pHeader->length = 0;
    free(pHeader);
  }

}
