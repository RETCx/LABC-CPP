#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

void insert(Node** head_ref, int new_data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->next = NULL;
    
    if (*head_ref == NULL || (*head_ref)->data >= new_node->data) {
        new_node->next = *head_ref;
        *head_ref = new_node;
    } else {
        Node* current = *head_ref;
        while (current->next != NULL && current->next->data < new_node->data) {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}

void del_ete(Node** head_ref, int key) {
    Node* temp = *head_ref;
    Node* prev = NULL;
    
    while (temp != NULL && temp->data == key) {
        *head_ref = temp->next;
        free(temp);
        temp = *head_ref;
    }
    
    while (temp != NULL) {
        while (temp != NULL && temp->data != key) {
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

void print(Node* node) {
    printf("[ ");
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("]\n");
}

int main() {
    Node* head = NULL;
    char command;
    int data;
    
    do {
        printf("input> ");
        scanf(" %c", &command);
        
        switch(command) {
            case 'i':
                scanf("%d", &data);
                insert(&head, data);
                break;
            case 'd':
                scanf("%d", &data);
                del_ete(&head, data);
                break;
            case 'p':
                print(head);
                break;
            case 'q':
                break;
            default:
                printf("Invalid command\n");
                break;
        }
    } while (command != 'q');
    
    return 0;
}
