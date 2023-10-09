#include "shell.h"

struct Node* buildPathLinkedList() {
    char* path = getenv("PATH");
    char* token = strtok(path, ":");
    struct Node* head = NULL;
    struct Node* current = NULL;
    
    while (token != NULL) {
        struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
        newNode->data = token;
        newNode->next = NULL;
        
        if (head == NULL) {
            head = newNode;
            current = newNode;
        } else {
            current->next = newNode;
            current = newNode;
        }
        
        token = strtok(NULL, ":");
    }
    
    return head;
}
