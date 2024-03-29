// A menu driven program to create a double ended queue by using array and implement the following instructions: insert, deletion, display

#include<stdio.h>
#define MAX 5

void insert_rear();
void insert_front();
void delete_rear();
void delete_front();
void qdisplay();

int rear=-1;
int front=-1;
int dq[MAX];

int main(){
    int choice;
    char ch;
    printf("Double Ended Queue Menu -\n(1)Input restricted queue\n(2)Ouptut restricted queue\n(3)Display\n(4)Exit\n");
    do{
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: printf("Restrictions -\n(a)insert_rear\n(b)delete_front\n(c)delete_rear\n(d)display\n(e)exit\n");
            do{
                printf("Choose restriction: ");
                scanf(" %c",&ch);
                switch(ch){
                    case 'a': insert_rear();
                    break;
                    case 'b': delete_front();
                    break;
                    case 'c': delete_rear();
                    break;
                    case 'd': qdisplay();
                    break;
                    case 'e': break;
                    default: printf("Wrong choice!");
                }
            }while(ch!='e');
            break;
            case 2: printf("Restrictions -\n(a)insert_rear\n(b)insert_front\n(c)delete_front\n(d)display\n(e)exit\n");
            do{
                printf("Choose restriction: ");
                scanf(" %c",&ch);
                switch(ch){
                    case 'a': insert_rear();
                    break;
                    case 'b': insert_front();
                    break;
                    case 'c': delete_front();
                    break;
                    case 'd': qdisplay();
                    break;
                    case 'e': break;
                    default: printf("Wrong choice!");
                }
            }while(ch!='e');
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

void insert_front(){
    int a;
    if((rear==MAX-1 && front==0)||(front=rear+1)){
        printf("Queue Overflow!\n");
        return;
    }
    if(front==-1){
        front=rear=0;
    }
    else{
        if(front==0){
            front=MAX-1;
        }else{
            front=front-1;
        }
    }
    printf("Enter element to insert: ");
    scanf("%d",&a);
    dq[front]=a;
}

void insert_rear(){
    int b;
    int a;
    if((rear==MAX-1 && front==0)||(front=rear+1)){
        printf("Queue Overflow!\n");
        return;
    }
    if(front==-1){
        front=rear=0;
    }
    else{
        if(rear==MAX-1){
            rear=0;
        }else{
            rear=rear+1;
        }
    }
    printf("Enter element to insert: ");
    scanf("%d",&b);
    dq[rear]=b;
}

void delete_front(){
    if(front==-1){
        printf("Queue Underflow!\n");
        return;
    }
    printf("Element %d deleted\n",dq[front]);
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

void delete_rear(){
    if(front==-1){
        printf("Queue Underflow!\n");
        return;
    }
    printf("Element %d deleted\n",dq[front]);
    if(front==rear){
        front=rear=-1;
    }
    else{
        if(rear=0){
            rear=MAX-1;
        }
        else{
            rear=rear-1;
        }
    }
}

void qdisplay(){
    int fp=front,rp=rear;
    if(front==-1){
        printf("Queue is Empty!");
    }
    else{
        if(fp<=rp){
            while(fp<=rp){
                printf("%d",dq[fp]);
                fp++;
            }
        }
        else{
            while(fp<=MAX-1){
                printf("%d",dq[fp]);
                fp++;
            }
            fp=0;
            while(fp<=rp){
                printf("%d",dq[fp]);
                fp++;
            }
        }
        printf("\n");
    }
}