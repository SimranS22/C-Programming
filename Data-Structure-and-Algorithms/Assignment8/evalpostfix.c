// Evaluate Postfix Expression

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define MAX 100
#define POSTFIXSIZE 100

void push(int a);
int pop();
void evalpostfix(char postfix[]);

int stack[MAX];
int top = -1;

int main() {
    char postfix[POSTFIXSIZE];
    int i = 0;

    printf("\nEnter Postfix Expression\nGive ) after completing expression\n");
    char ch;
    while (1) {
        scanf(" %c", &ch);
        if (ch == ')') {
            postfix[i] = '\0'; 
            break;
        }
        postfix[i] = ch;
        i++;
    }
    evalpostfix(postfix);
    return 0;
}

void push(int a) {
    if (top >= MAX - 1) {
        printf("\nStack overflow\n");
        return;
    } else {
        top = top + 1;
        stack[top] = a;
    }
}

int pop() {
    int a;
    if (top < 0) {
        printf("\nStack underflow\n");
        return 0;
    } else {
        a = stack[top];
        top = top - 1;
        return a;
    }
}

void evalpostfix(char postfix[]) {
    int i, val, A, B;
    char x;
    for (i = 0; postfix[i] != '\0'; i++) {
        x = postfix[i];
        if (isdigit(x)) {
            push(x - '0');
        } else if (x == '*' || x == '/' || x == '%' || x == '+' || x == '-') {
            A = pop();
            B = pop();
            switch (x) {
                case '*': val = B * A;
                    break;
                case '/': val = B / A;
                    break;
                case '+': val = B + A;
                    break;
                case '-': val = B - A;
                    break;
                case '%': val = B % A;
                    break;
            }
            push(val);
        }
    }
    printf("\nResult: %d\n", pop());
}
