#include "stdio.h"

int main(int argc, char const *argv[]) {
  printf("Hello\n");
  char name[10];
  printf("What's your name:\n");
  scanf("%s", name);
  printf("%s\n", name);
  return 0;
}
