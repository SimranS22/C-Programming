// Perform Stack operations in C - Create, Push, Pop, Traverse

#include <stdio.h>

const int size = 5;

int push(int stack[], int *top, int ele) {
    if (*top == size - 1) {
        return -1;
    } else {
        (*top)++;
        stack[*top] = ele;
    }
    return 0;
}

int pop(int stack[], int *top) {
    int send;
    if (*top == -1) {
        return -1;
    } else {
        send = stack[*top];
        (*top)--;
    }
    return send;
}

void traverse(int stack[], int top) {
    int i;
    if (top == -1) {
        return;
    } else {
        printf("Stack:\n");
        for (i = top; i >= 0; --i) {
            printf("%d <-", stack[i]);
        }
    }
}

int main() {
    int stack[size], ele, top, res, ch, flag;
    char choice;

    top = -1;
    flag = 1;

    printf("Menu for stack operations:\n");
    printf("(1)Push\n(2)Pop\n(3)Traverse\n");

    do {
        flag = 0;
        printf("Choose an operation: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("\nPush() - Pushing into Stack\n");
                do {
                    printf("Element to insert: ");
                    scanf("%d", &ele);
                    res = push(stack, &top, ele);
                    if (res == -1) {
                        printf("Stack Overflow!\n");
                        break;
                    } else {
                        printf("%d inserted\n", ele);
                    }
                    printf("Want to insert more elements(y/n): ");
                    scanf(" %c", &choice); // Add space to consume newline
                } while (choice == 'y');
                break;
            case 2:
                printf("\nPop() - Popping from Stack\n");
                do {
                    res = pop(stack, &top);
                    if (res == -1) {
                        printf("Stack Underflow!\n");
                        break;
                    } else {
                        printf("%d deleted\n", ele);
                    }
                    printf("Want to delete more elements(y/n): ");
                    scanf(" %c", &choice); // Add space to consume newline
                } while (choice == 'y');
                break;
            case 3:
                printf("\nTraverse() - Displaying Stack\n");
                traverse(stack, top);
                break;
            default:
                printf("Choice Unavailable!");
        }
        printf("\nWant to choose another operation(y/n):\n");
        scanf(" %c", &choice); // Add space to consume newline
    } while (choice == 'y' && flag == 0);
    if (flag == 1) {
        return 0;
    }
    return 0;
}
