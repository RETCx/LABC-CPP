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

void deread(node **delV , int value){
    node *current  = *delV , *prev = *delV ,*checkV = *delV ,*sameV = *delV;
    int count = 0 ,checkc = 0;
    while (checkV->num != value && (checkV->next != NULL))
    {
        checkV = checkV->next ;
    }
    while (sameV->next != NULL)
    {
        if(sameV->num == value){
            count++ ;
        }
        sameV = sameV->next ;
    }
    
    if(checkV->num == value){
        if(value == current->num){
            *delV = current->next ;
            free(current);
            current = NULL ; 

        }
        else{
            node *link  = NULL ,*temp = NULL ;
            while(current->next != NULL){
                if(current->num == value){
                    link = prev ;
                    while (checkc < count)
                    {
                        temp = current->next ;
                        current = current->next ;
                        checkc++;
                    }

                    link->next = temp ;
                    break;
                    
                } 
                prev = current ;
                current = current->next ;
            }
            if(count == 1){
                prev->next = current->next ;
            }
                   
        }
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
            deread(&Node,i);
        }
        printf("input> ");
        scanf(" %c", &c);
    }
    
}