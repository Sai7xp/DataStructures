#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void enq();
void deq();
void display();
void lastEle();
int queue[100],i,front=0,rear=0,CAPACITY;

int main(){
    //clrscr();
    int choice;
    printf("Enter the size of Queue[MAX=100]:");
    scanf("%d",&CAPACITY);
    while(1){
        printf("\nQueue operations using array");
        printf("\n\t--------------------------------");
        printf("\n\t1.EnQ \n\t 2.DeQ \n\t 3.DisplayQ \n\t 4.To see the last one\n\t 0.Exit\n\t");
        printf("Select and enter your choice from the above list:");
        scanf("%d",&choice);

        switch(choice){
            case 0:exit(1);
            break;
            case 1:enq();
            break;
            case 2:deq();
            break;
            case 3:display();
            break;
            case 4:lastEle();
            break;
            default:printf("Select and enter valid choice:1/2/3/4");
        }
    }  
}
void enq(){
    if(CAPACITY==rear){
        printf("--------Queue is full make a new line--------\n");
    }
    else{
        int element;
        printf("Enter the element to insert:");
        scanf("%d",&element);
        queue[rear]=element;
        rear++;
    }
}

void deq(){
    if(front==rear){
        printf("no elements in the queue to delete");
    }
    else{
        printf("Element removed from the queue is:%d",queue[front]);
        for(i=0;i<rear;i++){
            queue[i]=queue[i+1];
        }
        rear--;
    }
}

void display(){
    if(rear==front){
        printf("Queue is empty take a break ");
    }
    else{
        printf("elements in the queue are:\n");
        for(i=front;i<rear;i++){
            printf("%d\n",queue[i]);
        }
    }
}
void lastEle(){
    if(front==rear){
        printf("NoOne left in the queue WAIT UNTIL SOMEONE ENTERS");
    }
    else{
        printf("%d is the last element in the queue",queue[rear-1]);
    }
}