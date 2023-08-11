#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 97

struct Node
{
    int data;
    struct Node *next;
};

struct Node *hash_table[TABLE_SIZE];

// hash function
int hash_function(int key)
{
    return key % TABLE_SIZE;
}

// add a number to the hash table
void add_number(int x)
{
    struct Node *block = (struct Node *)malloc(sizeof(struct Node));
    block->data = x ;
    int key = hash_function(x);
    if (hash_table[key] == NULL)
    {
        block->next = hash_table[key];
        hash_table[key] = block ;
    }
    else{
        struct Node *start = hash_table[key] ;
        if(block->data <  start->data){
            block->next = hash_table[key] ;
            hash_table[key] = block;
        }
        else{
            struct Node *prev = NULL ;
            while(start){
                if(start->data > block->data ){
                    prev->next = block ;
                    block->next = start ;
                    break;
                }
                prev = start ;
                start = start->next ;
            }
            if(start == NULL){
                prev->next = block ;
                block->next = NULL ;
            }
        }
    }
}

// print the contents of the hash table
void print_table()
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        printf("KEY %2d: ", i);
        struct Node *node_ptr = hash_table[i];
        while (node_ptr != NULL)
        {
            printf("%d ", node_ptr->data);
            node_ptr = node_ptr->next;
        }
        printf("\n");
    }
}

// main function
int main()
{
    struct Node *head = NULL;
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        hash_table[i] = NULL;
    }
    while (1)
    {
        char command;
        int x;
        printf("input> ");
        scanf("%c", &command);
       if (command == 'a')
        {
            scanf("%d", &x);
            add_number(x);
        }
        else if (command == 'p')
        {
            print_table();
        }
        else if (command == 'q')
        {
            break;
        }
         getchar(); // consume the newline character
    }
    return 0;
}