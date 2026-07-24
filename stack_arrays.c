#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

// push operation
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed into the stack\n", value);
    }
}

// pop operation
void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("%d popped from the stack\n", stack[top]);
        top--;
    }
}

// peek operation
void peek() {
    if (top == -1) {
        printf("Stack is Empty\n");
    } else {
        printf("Top element: %d\n", stack[top]);
    }
}

// display operation
void display() {
    if (top == -1) {
        printf("Stack is Empty");
    } else {
        printf("Stack Elements: \n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
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