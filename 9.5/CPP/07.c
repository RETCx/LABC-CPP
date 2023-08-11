#include <stdio.h>
#include <stdlib.h>

#define SIZE  97

typedef struct nodeType {
  int   item;
  struct nodeType* next;
} Node;

Node *hash_table[SIZE]; //แต่ละ ช่องของ hash_table มีค่าเป็น NUll


int hash_function(int key)
{
    return key % SIZE;
}

void add_numToNodeArray(int value){
  Node *block = (Node*)malloc(sizeof(Node));
  int key = hash_function(value);
  block->next = hash_table[key];
  hash_table[key] = block ;
  hash_table[key]->item = value ;
}

void printKey(){
  for(int i = 0; i < SIZE ; i++){
    printf("KEY %2d: ",i);
    Node *addressInArray = hash_table[i];
    while(addressInArray != NULL){
      printf("%d ",addressInArray->item);
      addressInArray = addressInArray->next ;
    }
    printf("\n");
  }
}

int main(){
  char c ;
  int i ;
  printf("input> ");
  scanf(" %c", &c);
  while(c != 'q'){
    if(c == 'a'){
      scanf("%d",&i);
      add_numToNodeArray(i);
    }
    if(c == 'p'){
      printKey();
    }
    printf("input> ");
    scanf(" %c", &c);
  }


}
