// Convert Infix to Postfix expression
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define SIZE 50

void push(char a);
char pop();
int operatorsign(char sign);
int precedence(char sign);
void infixtopostfix(char infix_exp[], char postfix_exp[]);

int stack[SIZE];
int top = -1;

int main() {
    char infix[SIZE], postfix[SIZE];
    printf("\nEnter Infix Expression: ");
    fgets(infix, SIZE, stdin); 
    infix[strlen(infix) - 1] = '\0'; 
    infixtopostfix(infix, postfix);
    printf("\nPostfix Expression: %s\n", postfix);
    return 0;
}

void push(char a){
    if(top>=SIZE-1){
        printf("\nStack overflow\n");
    }
    else{
        top=top+1;
        stack[top]=a;
    }
}
char pop(){
    char a;
    if(top<0){
        printf("\nStack underflow\n");
        getchar();
        exit(1);
    }
    else{
        a=stack[top];
        top=top-1;
        return a;
    }
    return 0;
}

int operatorsign(char sign){
    if(sign=='^'||sign=='*'||sign=='/'||sign=='%'||sign=='+'||sign=='-'){
        return 1;
    }
    else{
        return 0;
    }
}

int precedence(char sign){
    if(sign=='^'){
        return 3;
    }
    else if(sign=='*'||sign=='/'||sign=='%'){
        return 2;
    }
    else if(sign=='+'||sign=='-'){
        return 1;
    }
    else{
        return 0;
    }
}

void infixtopostfix(char infix_exp[], char postfix_exp[]) {
    int i, j;
    char a, x;
    push('(');
    strcat(infix_exp, ")");
    i = 0;
    j = 0;
    a = infix_exp[i];
    while (a != '\0') {
        if (a == '(') {
            push(a);
        } else if (isalnum(a)) {
            postfix_exp[j] = a;
            j++;
        } else if (operatorsign(a) == 1) {
            x = pop();
            while (operatorsign(x) == 1 && precedence(x) >= precedence(a)) {
                postfix_exp[j] = x;
                j++;
                x = pop();
            }
            push(x);
            push(a); // Push the current operator onto the stack
        } else if (a == ')') {
            x = pop();
            while (x != '(') {
                postfix_exp[j] = x;
                j++;
                x = pop();
            }
        } else {
            printf("Wrong Infix Expression.\n");
            getchar();
            exit(1);
        }
        i++;
        a = infix_exp[i];
    }
    if (top > 0) {
        printf("Wrong Infix Expression.\n");
        getchar();
        exit(1);
    }
    postfix_exp[j] = '\0';
}
