#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
void insert();
void delete();
void display();
typedef struct node{
    struct node *prev;
    int data;
    struct node *next;
}Node;
Node* head;
void main(){
    int choice;
    while(1){
        printf("1.insert\t2.delete\t3.display\t4.exit\n");
        printf("enter choice");
        scanf("%d",&choice);
        switch(choice){
            case 1:insert();
            break;
            case 2:delete();
            break;
            case 3:display();
            break;
            case 4:exit(1);
            break;
            default: printf("\nEnter valid choice");
        }
    }
}

void insert(){
 Node *temp,*ptr;
 ptr=(Node*)malloc(sizeof(Node));
 printf("Enter the value");
 scanf("%d",&ptr->data);
 if(head==NULL){
     ptr->next=NULL;
     ptr->prev=NULL;
     head=ptr;
 }
 else{
     temp=head;
     while(temp->next!=NULL){
         temp=temp->next;
     }
     temp->next=ptr;
     ptr->prev=temp;
     ptr->next=NULL;
 }
}
void delete(){
    Node* temp;
    if(head==NULL) printf("List is empty");
   else if(head->next==NULL){
        head=NULL;
        free(head);
        printf("Element deleted");
    }
    else{
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->prev->next=NULL;
        free(temp);
        printf("Element deleted");
    }
}
void display(){
    Node* temp;
    if(head==NULL){
        printf("No elements in the linked list");
        return ;
    }
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}