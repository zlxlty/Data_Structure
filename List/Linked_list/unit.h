#ifndef _UNIT_H_
#define _UNIT_H_

typedef void Node;

typedef struct Header{

  int length;
  struct Unit *down;

}Header;

typedef struct Unit{

  struct Unit *down;
  char letter;

}Unit;


Header* Create_Unit();
/* Create a Header of a linked list
:param:
:return: pointer of Header
*/

void Insert_Unit(Header *pHeader, char lttr);
/* Insert a unit structure inside the linked list
:param Header *pHeader: pointer of the head of linked list
:param char lttr: the letter that need to be insert into linked list
:return: None
*/

void Print_Unit(Header *pHeader);
/* Print all the elements in the linked list
:param pHeader: pointer of the head of linked list
:return: None
*/

Unit* Find_Unit(Header *pHeader, char val);
/* Find the first unit which contains specific value in the linked list
:param pHeader: pointer of the head of linked list
:param val: the value you are looking for
:return: the pointer of that unit
*/

void Destroy_Unit(Header *pHeader);
/* Free all the malloced space and set all pointers to NULL
:param pHeader: the pointer of the head of linked list
:return: None
*/

#endif
