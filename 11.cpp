#include <stdio.h>

#define n 5

int stack[n];
int top = -1;

void push(int x) {
    if (top == n - 1) {
        printf("Stack overflow\n");
    } else {
        top++;
        stack[top] = x;
    }
}

void pop() {
    if (top == -1) {
        printf("Stack underflow\n");
    } else {
        int y = stack[top];
        top--;
        printf("Popped element: %d\n", y);
    }
}

void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Top element: %d\n", stack[top]);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int ch, x;
    do {
        printf("\nEnter choice for operation:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("0. Exit\n");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter element to push: ");
                scanf("%d", &x);
                push(x);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (ch != 0);

    return 0;
}

