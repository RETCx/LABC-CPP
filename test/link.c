#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value ;
    struct Node* next ;
} node ;


void printList(node *pList) {
node *start = pList ;
    while (start != NULL)
    {
        printf("%d ",start->value);
        start = start->next;
    }
    printf("\n");

}

void insertNode(int value , node** ref) {
    node *block = (node*)malloc(sizeof(node));
    block->value = value;
    block->next = NULL ;
    if(*ref == NULL){
        *ref = block;
    }
    else if (value < (*ref)->value)
    {
        block->next = *ref ;
        *ref = block ;
    }
    else{
        node *curr = *ref ;
        node *prev = NULL ;
        while(curr){
            if(block->value < curr->value){
                prev->next = block ;
                block->next = curr ;
                break;
            }
            prev = curr ;
            curr = curr->next;
        }
        if(!(curr)){
            prev->next = block ;
        } 
    }
    
}

int main() {
  int i, value;
  node *pList=NULL;

  for (i = 0; i < 10; i++) {
    scanf(" %d", &value);
    insertNode(value , &pList);
  }

  printList(pList);
}