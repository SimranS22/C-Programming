// Check whether a string is palindrome or not by using stack.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20

int top=-1, front=0;
int stack[MAX];
void push(char);
void pop();

void push(char ele) {
    top++;
    stack[top] = ele;
}

void pop() {
    top--;
}

int main() {
    char b, str[MAX];
    int i;

    printf("Input String:\n");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++){
        b=str[i];
        push(b);
    }
    for(i=0;i<strlen(str)/2;i++){
       if(stack[top]==stack[front]){
        pop();
        front++;
       }
       else{
        printf("%s is not a palindrome string.\n",str);
        break;
       }
    }
    if(strlen(str)/2 == front){
        printf("%s is a palindrome string.\n",str);
    }
    return 0;
}
