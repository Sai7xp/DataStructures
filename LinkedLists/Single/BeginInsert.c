#include<stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}Node;
Node *head=NULL;
void display();

void length(){
    Node* temp;
    int count;
    temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    printf("Length of the linked list is :%d",count);
}
int main()
{
    Node *prev,*p;
    int n,i;
    printf ("number of elements to enter into linked list:");
    scanf("%d",&n);
    printf("Enter %d elements",n);
    for(i=1;i<=n;i++)
    {
        p=malloc(sizeof(Node));
        scanf("%d",&p->data);
        p->next=NULL;
        if(head==NULL)
            head=p;
        else
            prev->next=p;
        prev=p;
    }
    display();
    length();
    return 0;
}
void display()
{
    struct node* temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
