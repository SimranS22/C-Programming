// A menu driven program to create a linear queue and implement following functions: insert, deletion, display

#include<stdio.h>
#define MAX 5

void qins();
void qdel();
void qdisplay();

int rear=-1;
int front=-1;
int q[MAX];

int main(){
    int flag, ch;
    printf("Menu -\n(1)Insert\n(2)Delete\n(3)Display\n");
    flag=1;
    do{
        printf("Choose operation: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: printf("Insertion in Queue\n");
            qins();
            break;
            case 2: printf("Deletion in Queue\n");
            qdel();
            break;
            case 3: printf("Displaying Queue\n");
            qdisplay();
            break;
            default:printf("Wrong Choice!");
        }
        printf("\nPerform another operation? [1 for yes and 0 for no]");
        scanf("%d",&flag);
    }while(flag==1);
    return 0;
}

void qins(){
    int ele;
    if(rear==MAX-1){
        printf("Queue Overflow!");
    }
    else{
        if(front==-1){
            front=0;
            printf("Element to insert: ");
            scanf("%d",&ele);
            rear=rear+1;
            q[rear]=ele;
            printf("%d inserted", ele);
        }
        else{
            printf("Element to insert: ");
            scanf("%d",&ele);
            rear=rear+1;
            q[rear]=ele;
            printf("%d inserted", ele);
        }
    }
}

void qdel(){
    if(front==-1||front>rear){
        printf("Queue Underflow!");
        return;
    }
    else{
        printf("%d deleted",q[front]);
        front=front+1;
    }
}

void qdisplay(){
    int i;
    if(front==-1){
        printf("Queue is Empty!");
    }
    else{
        for(i=front;i<=rear;i++){
            printf(" %d - ",q[i]);
        }
        printf("\n");
    }
}