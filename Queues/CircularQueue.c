#include<stdio.h>
#include<stdlib.h>
void insert();
void delete();
void display();
int isEmpty();
int i,front=-1,rear=-1,CAPACITY;
int C_queue[100];
int main(){
    int choice;
    printf("Enter the size of the circular queue[MAX=100]:");
    scanf("%d",&CAPACITY);
    while(1){
        printf("performing operations on circular queue");
        printf("\n\t0.Exit\n\t1.insert\n\t2.delete\n\t3.display\n");
        printf("\nSELECT YOUR CHOICE");
        scanf("%d",&choice);
        switch(choice){
            case 0:exit(1);
            break;
            case 1:insert();
            break;
            case 2:delete();
            break;
            case 3:display();
            break;
            default:printf("select valid option from the above options");
        }
    }
}

void insert(){
    int element;
    if(front==rear+1 || front==0&&rear==CAPACITY-1){
        printf("Circular queue is full\n");
    }
    else if(front==-1&&rear==-1){
        rear=front=0;
        printf("enter the element to insert");
        scanf("%d",&element);
        printf("%d inserted at rear place %d",element,rear);
        C_queue[rear]=element;
    }
    else if(rear==CAPACITY-1){  
        rear=0;
        printf("enter the element to insert");
        scanf("%d",&element);
        C_queue[rear]=element;
    }
    else{
        rear++;
        printf("enter the element to insert");
        scanf("%d",&element);
        C_queue[rear]=element;
    }
}


void delete(){
    if(isEmpty()){
       printf("!!! Queue is empty !!!"); 
    }
    else if(front==rear){
        printf("deleted element from the queue is:%d",C_queue[front]);
        front=rear=-1;
    }
    else if(front==CAPACITY-1){
        printf("deleted element from the queue is:%d",C_queue[front]);
        front=0;
    }
    else{
        printf("deleted element from the queue is:%d",C_queue[front]);
        front++; 
    }
}

void display(){
    if(isEmpty()) printf("\nNo elements in the circular queue to display");
    else{
     //todo Loop through all the elements in the circular queue and display them   
    }
}



int isEmpty(){
    if(front==-1 && rear==-1)
    return 1;
    return 0;
}
// void insert(){
//     if(front==rear+1 || rear=capacity-1 && front=0)
// }