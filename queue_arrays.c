#include <stdio.h>

#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    queue[rear] = value;

    printf("%d enqueued into queue\n", value);
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
        return;
    }

    printf("%d dequeued from queue\n", queue[front]);
    front++;

    if (front > rear) {
        front = rear = -1;
    }
}

void peek() {
    if (front == -1) {
        printf("Queue is Empty\n");
    } else {
        printf("Front element: %d\n", queue[front]);
    }
}

void display() {
    if (front == -1) {
        printf("Queue is Empty\n");
        return;
    }

    printf("Queue Elements: \n");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
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