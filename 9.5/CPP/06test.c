#include <stdio.h>
#include <stdlib.h>
typedef struct link {
    int num ;
    struct link *next ;
} node ;


void insert(node **head , int value){
    node *newNode = (node *)malloc(sizeof(node)) ;
    newNode->num = value;
    newNode->next = NULL;
    if(*head == NULL){
        *head = newNode ;
    }
    else if((*head)->num > value ){
        newNode->next = *head ;
        *head = newNode ;
    }
    else{
        node *check = *head ;
        for(check->next ; (check->next != NULL) && (check->next->num < value) ; ){
            check = check->next ;
        }
        newNode->next = check->next ;
        check->next = newNode ; 
    }
}

void del_ete(node** head_ref, int key) {
    node* temp = *head_ref;
    node* prev = NULL;
    
    while (temp != NULL && temp->num == key) {
        *head_ref = temp->next;
        free(temp);
        temp = *head_ref;
    }
    
    while (temp != NULL) {
        while (temp != NULL && temp->num != key) {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL) {
            return;
        }
        prev->next = temp->next;
        free(temp);
        temp = prev->next;
    }
}

void print(node *Node){
    while (Node != NULL) {
        printf("%d ", Node->num);
        Node = Node->next;
    }


}

int main(){
    node *Node = NULL ;
    char c ;
    int k , d ,i ;
    printf("input> ");
    scanf(" %c",&c);
    while (c != 'q')
    {
        if(c == 'i'){
            scanf(" %d",&i);
            insert(&Node,i);
        }
        else if(c == 'p'){
            if(Node == NULL){
                printf("[ ]\n");
            }
            else{
                printf("[ ");
                print(Node);
                printf("]\n");
            }
            
        }
        else if(c == 'd'){
            scanf(" %d",&i);
            del_ete(&Node,i);
        }
        printf("input> ");
        scanf(" %c", &c);
    }
    
}