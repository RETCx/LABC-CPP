#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value ;
    struct Node* next ;
} node ;

void printList(node* pList) {
    node *star = pList ;
    while (star != NULL)
    {
        printf("%d ",star->value);
        star = star->next;
    }
    printf("\n");
    
}

void insertNode(int value , node** startPtr) //รับ address ของ pList
{
    node *temp = malloc(sizeof(node)) ,*first; 
    temp->value = value ;
    temp->next = NULL;
    if(*startPtr == NULL){//deref จากเดิม startPtr เก็บ address ของ pList ถ้า*ไปจะได้ค่าของpListออกมา
        *startPtr = temp ; //เก็บ address ของ node แรก , head
    }
    else if((*startPtr)->value < value){ //ใส่่ด้านหลัง
        temp->next = *startPtr ; // ต่อท้าย
        *startPtr = temp ;
    }
    else{
        node *current = *startPtr ;
        while(current->next != NULL && current->next->value < value){
            current = current->next;
        }
        temp->next = current->next;
        current->next = temp ;
    }

}

int main() {
  int i, value;
  node *pList=NULL; //address

  for (i = 0; i < 10; i++) {
    scanf(" %d", &value);
    insertNode(value , &pList); // ส่ง address ที่เก็บ address of NULL

  }

  printList(pList);
}