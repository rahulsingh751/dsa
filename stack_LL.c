#include <stdio.h>
#include <stdlib.h>

// node structure
struct Node {
    int data;
    struct Node *next;
};

struct Node *top = NULL;

// push operation
void push(int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    
    if (newNode == NULL) {
        printf("Stack Overflow\n");
        return;
    }

    newNode->data = value;
    newNode->next = top;
    top = newNode;
    
}

// pop operation
void pop() {
    if (top == NULL) {
        printf("Stack Underflow\n");
        return;
    }

    struct Node *temp = top;
    printf("%d popped from the stack\n", top->data);
    top = top->next;
    free(temp);
}

// peek operation
void peek() {
    if (top == NULL) {
        printf("Stack is Empty\n");
    } else {
        printf("Top element %d\n", top->data);
    }
}

// display operation
void display() {
    if (top == NULL) {
        printf("Stack is Empty");
        return;
    }

    struct Node *temp = top;
    printf("Stack Elements: \n");

    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main() {

    push(10);
    push(20);
    push(30);
    display();
    peek();
    pop();
    peek();
    display();

    return 0;
}