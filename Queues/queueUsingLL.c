#include<stdio.h>   
#include<stdlib.h>  
struct node   
{  
    int data;   
    struct node *next;  
};  
struct node *front;  
struct node *rear;   
void insert();  
void delete();  
void display();  
void main ()  
{  
    int choice;   
    while(choice != 4)   
    {     
        printf("\n*************************Main Menu*****************************\n");  
        printf("\n=================================================================\n");  
        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");  
        printf("\nEnter your choice ?");  
        scanf("%d",& choice);  
        switch(choice)  
        {  
            case 1:  
            insert();  
            break;  
            case 2:  
            delete();  
            break;  
            case 3:  
            display();  
            break;  
            case 4:  
            exit(0);  
            break;  
            default:   
            printf("\nEnter valid choice??\n");  
        }  
    }  
}  
void insert(){
    struct node* ptr;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter value to enqueue");
    scanf("%d",&ptr->data);
    rear->next=NULL;
    if(front==NULL){
        front=rear=ptr;
    }
    else{
        rear->next=ptr;
        rear=ptr;
    }
}
void delete(){
    struct node *temp;
    if(front==NULL){
        printf("Nothing to delete");
    }
    else{
        temp=front;
        front=front->next;
        free(temp);
    }
} 

void display(){
    struct node *temp;
    temp=front;
    if(temp==NULL){
        printf("Empty queue");
    }
    else{
        while(temp!=NULL){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }
}