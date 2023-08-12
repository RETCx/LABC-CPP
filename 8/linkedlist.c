#include <stdio.h>
#include <stdlib.h>

struct Node__ {
    int value ;
    struct Node__* next ;
    
};

typedef struct Node__ Node;
typedef      Node*    NodePtr;


void printList(NodePtr start){
    NodePtr current = start ;
    while(current != NULL){
        printf("%d -> " ,current->value) ;
        current = current->next;
    }
    printf("\n");
}

void addFirst(NodePtr* startPtr , int value){
    NodePtr temp = (NodePtr)malloc(sizeof(Node));
    //ถ้าไม่ได้ typedef จะเป็น Node* = (Node*) malloc(sizeof(Node));
    temp->value = value;
    if(*startPtr == NULL) {
        temp->next = NULL ;
    }
    else{
        temp->next = *startPtr;
    }
    *startPtr = temp ;
}
void addLast(NodePtr *startPtr , int value){//startPtr = 0x14f15ec เก็บ address ของ *startPtr = 0x0
    NodePtr temp = (NodePtr)malloc(sizeof(Node));//จองพื้นที่
    temp->value = value ; //ให้ value 
    temp->next = NULL;// 
    if(*startPtr == NULL){
        *startPtr = temp ;
    } else{
        NodePtr current  = *startPtr ;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = temp ;
    }

}
int main()
{
    NodePtr *startPtr;
    startPtr = NULL ; /*Null ใช้กับ pointer*/
    addLast(&startPtr , 0);
    addFirst(&startPtr , 10);
    addFirst(&startPtr , 20);
    addFirst(&startPtr , 30);
    addLast(&startPtr , 100);


    
    printList(startPtr);
    return 0 ;
}