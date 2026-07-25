#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

// Enqueue
void enqueue(int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Queue Overflow\n");
        return;
    }

    newNode->data = value;
    newNode->next = NULL;

    if (front == NULL && rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

void dequeue() {
    if (front == NULL) {
        printf("Queue Underflow\n");
        return;
    }

    struct Node *temp = front;
    printf("%d dequeued from the queue\n", front->data);

    front = front->next;

    if (front == NULL) {
        rear = NULL;
    }

    free(temp);
}

void peek() {
    if (front == NULL) {
        printf("Queue is Empty\n");
    } else {
        printf("Front element: %d\n", front->data);
    }
}

void display() {
    if (front == NULL) {
        printf("Queue is Empty\n");
        return;
    }

    struct Node *temp = front;

    printf("Queue elements: \n");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

int main() {

    enqueue(10);
    enqueue(20);

    display();

    enqueue(30);
    display();

    peek();
    dequeue();
    peek();
    display();

    return 0;
}