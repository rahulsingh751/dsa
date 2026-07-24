#include <stdio.h>
#include <stdlib.h>

// define node
struct Node {
    int data;
    struct Node *next;
};

// create a new node
struct Node* createNode(int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
};

void insertEnd(struct Node **head, int value) {
    struct Node *newNode = createNode(value);

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node *temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void display(struct Node *head) {
    struct Node *temp = head;

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

void deleteFirst(struct Node **head) {
    if (*head == NULL) {
        return;
    }

    struct Node *temp = *head;
    *head = (*head)->next;
    free(temp);
}

int main() {
    struct Node *head = NULL;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);

    printf("Linked List: \n");
    display(head);

    deleteFirst(&head);

    printf("After deleting first node: \n");
    display(head);

    return 0;
}