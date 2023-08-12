#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    char alphabet ;
    node *next ;
} node ;




void sortedAlpha(node**head,char *alpha ){
    node* block = malloc(sizeof(block));
    block->alphabet = alpha ;
    block->next = NULL;
    if(*head == NULL;){*head = block;}
    else{
        if(alpha < (*head)->alphabet){
            block->next = *head;
            *head = block;
        }
        else{
            node*curr = *head;
            node*prev = NULL;
            while(curr){
                if(alpha > prev->alphabet){break;}
                prev = curr ;
                curr = curr->next;
            }
            prev->next = block ;
            block->next = curr->next; 
        }

    }
}

int main(){
    node* start = NULL;
    char a ;
    scanf("%c",&a);
    sortedAlpha(&head,&a);
    while
}