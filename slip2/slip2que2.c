#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct Stack {
    int *items;
    int top;
    int capacity;
};
void initialize(struct Stack *stack, int capacity) {
    stack->capacity = capacity;
    stack->items = (int *)malloc(stack->capacity * sizeof(int));
    stack->top = -1;
}

bool isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

bool isFull(struct Stack *stack) {
    return stack->top == stack->capacity - 1;
}

void push(struct Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack overflow\n");
        exit(EXIT_FAILURE);
    }
    stack->items[++stack->top] = value;
}

int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    return stack->items[stack->top--];
}

void copyStack(struct Stack *source, struct Stack *destination) {
    struct Stack temp;
    initialize(&temp, source->capacity);
    while (!isEmpty(source)) {
        int item = pop(source);
        push(&temp, item);
    }
    while (!isEmpty(&temp)) {
        int item = pop(&temp);
        push(source, item);
        push(destination, item);
    }
}

int main() {
    int capacity = 5;
    struct Stack stack1, stack2;
    initialize(&stack1, capacity);
    initialize(&stack2, capacity);
    push(&stack1, 1);
    push(&stack1, 2);
    push(&stack1, 0);
    push(&stack1, 4);
    copyStack(&stack1, &stack2);
    printf("Contents of stack2: ");
    while (!isEmpty(&stack2)) {
        printf("%d ", pop(&stack2));
    }
    printf("\n");
    free(stack1.items);
    free(stack2.items);
return 0;
}
