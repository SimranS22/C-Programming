// A menu driven program to create a double ended queue by using circular queue and implement the following instructions: insert, deletion, display

#include<stdio.h>
#define MAX 5

void cq_insert_rear();
void cq_insert_front();
void cq_delete_rear();
void cq_delete_front();
void qdisplay();

int rear=-1;
int front=-1;
int cdq[MAX];

int main(){
    int choice;
    char ch;
    printf("Main Menu -\n(1)Input restricted queue\n(2)Ouptut restricted queue\n(3)Display\n(4)Exit\n");
    do{
        printf("\nMain Menu -> Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: printf("Input restricted queue Menu -\n(a)cq_insert_rear\n(b)cq_delete_front\n(c)cq_delete_rear\n(d)display\n(e)exit\n");
            do{
                printf("Choose restriction: ");
                scanf(" %c",&ch);
                switch(ch){
                    case 'a': cq_insert_rear();
                    break;
                    case 'b': cq_delete_front();
                    break;
                    case 'c': cq_delete_rear();
                    break;
                    case 'd': qdisplay();
                    break;
                    case 'e': break;
                    default: printf("Wrong choice!");
                }
            }while(ch!='e');
            break;
            case 2: printf("Output restricted queue Menu  -\n(a)cq_insert_rear\n(b)cq_insert_front\n(c)cq_delete_front\n(d)display\n(e)exit\n");
            do{
                printf("Choose restriction: ");
                scanf(" %c",&ch);
                switch(ch){
                    case 'a': cq_insert_rear();
                    break;
                    case 'b': cq_insert_front();
                    break;
                    case 'c': cq_delete_front();
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

void cq_insert_front(){
    int a;
    if(((rear+1)%MAX)==front){
        printf("Queue Overflow!\n");
        return;
    }
    if(front==-1 && rear==-1){
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
    cdq[front]=a;
    printf("Element inserted.\n");
}

void cq_insert_rear(){
    int b;
    if(((rear+1)%MAX)==front){
        printf("Queue Overflow!\n");
        return;
    }
    if(front==-1){
        front=rear=0;
    }
    else{
        if(rear==MAX-1|| front!=0){
            rear=0;
        }else{
            rear=(rear+1)%MAX;
        }
    }
    printf("Enter element to insert: ");
    scanf("%d",&b);
    cdq[rear]=b;
    printf("Element inserted.\n");
}

void cq_delete_front(){
    if(front==-1){
        printf("Queue Underflow!\n");
        return;
    }
    printf("Element %d deleted\n",cdq[front]);
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

void cq_delete_rear(){
    if(front==-1){
        printf("Queue Underflow!\n");
        return;
    }
    printf("Element %d deleted\n",cdq[front]);
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
    printf("Queue:\n")
    if(fp<=rp){
        while(fp<=rp){
            printf("%d",cdq[fp]);
            fp++;
        }
    }
    else{
        while(fp<=MAX-1){
            printf("%d",cdq[fp]);
            fp++;
        }
        fp=0;
        while(fp<=rp){
            printf("%d",cdq[fp]);
            fp++;
        }
    }
        printf("\n");
}
