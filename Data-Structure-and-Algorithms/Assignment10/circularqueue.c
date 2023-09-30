// A menu driven program to create a circular queue by using array and implement the following instructions: insert, deletion, display

#include<stdio.h>
#define MAX 5

void qinsert(int a);
void qdelete();
void qdisplay();

int rear=-1;
int front=-1;
int cq[MAX];

int main(){
    int item, choice;
    printf("Circular Queue Menu -\n(1)Insert\n(2)Delete\n(3)Display\n(4)Exit\n");
    do{
        printf("Choose operation: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: printf("Insertion in Queue\n");
            printf("Input element to insert in queue: ");
            scanf("%d",&item);
            qinsert(item);
            break;
            case 2: printf("Deletion in Queue\n");
            qdelete();
            break;
            case 3: printf("Displaying Queue\n");
            qdisplay();
            break;
            case 4: break;
            default:printf("Wrong Choice!");
        }
    }while(choice!=4);
    return 0;
}

void qinsert(int a){
    if(((rear+1)%MAX)==front){
        printf("Queue Overflow!");
        return;
    }
    if(front==-1 && rear==-1){
        front=rear=0;
    }
    else{
        if(rear==MAX-1 && front!=0){
            rear=0;
        }
        else{
            rear=(rear+1)%MAX;
        }
    }
    cq[rear]=a;
    printf("Item inserted.\n");
}

void qdelete(){
    if(front==-1){
        printf("Queue Underflow!");
        return;
    }
    printf("%d deleted\n",cq[front]);
    if(front==rear){
        front=rear=-1;
    }
    else{
        if(front==MAX-1){
            front=0;
        }
        else{
            front=front+1;
        }
    }
}

void qdisplay(){
    int i;
    if(front==-1){
        printf("Queue is Empty!");
    }
    else{
        for(i=front;i<=rear;i++){
            printf(" %d - ",cq[i]);
        }
        printf("\n");
    }
}