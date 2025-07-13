#include <stdio.h>
#include <stdlib.h>

// Define node structure
struct Node {
    int data;
    struct Node *next;
};

// Function to insert node at the beginning
struct Node* insert(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    return newNode;
}

// Function to delete first occurrence of a value
struct Node* delete(struct Node* head, int value) {
    struct Node *temp = head, *prev = NULL;

    // If head node holds the value
    if (temp != NULL && temp->data == value) {
        head = temp->next;
        free(temp);
        return head;
    }

    // Search for the value
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    // If not found
    if (temp == NULL)
        return head;

    prev->next = temp->next;
    free(temp);
    return head;
}

// Function to traverse and print linked list
void traverse(struct Node* head) {
    struct Node* current = head;
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    // Insert nodes
    head = insert(head, 30);
    head = insert(head, 20);
    head = insert(head, 10);

    traverse(head);

    // Delete a node
    head = delete(head, 20);

    traverse(head);

    return 0;
}
