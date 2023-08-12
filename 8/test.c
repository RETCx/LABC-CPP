#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int value;
  struct node *next;
} node;

void printList(node *pList) {
  while (pList != NULL) {
    printf("%d ", pList->value);
    pList = pList->next;
  }
  printf("\n");
}

void insertNode(node **pList, int value) {
  node *newNode = (node *) malloc(sizeof(node));
  newNode->value = value;
  newNode->next = NULL;
  
  if (*pList == NULL) { // กรณีลิสต์ว่างอยู่
    *pList = newNode;
  } else if (value < (*pList)->value) { // กรณีเพิ่มโหนดด้านหน้า
    newNode->next = *pList;
    *pList = newNode;
  } else {
    node *current = *pList;
    while (current->next != NULL && current->next->value < value) { // ค้นหาตำแหน่งที่จะเพิ่มโหนด
      current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
  }
}

int main() {
  int i, value;
  node *pList=NULL;

  for (i = 0; i < 10; i++) {
    scanf(" %d", &value);
    insertNode(&pList, value);
  }

  printList(pList);
  return 0;
}