 #include<stdio.h>
 #include<stdlib.h>
 #include<stdbool.h>
typedef struct node
{
    int data;
    struct node *link;
}Node;
struct node* root=NULL;
void append(void);
void display(void);
void delete();
void search();
void length();
void main()
{
    int n;
    while(1)
    {
        printf("\n1.to append\n");
        printf("\n2.to display\n");
        printf("\n3.delete\n");
        printf("\n4.search\n");
        printf("\n5.Exit\n");
        printf("\n6.Find Length\n");
        printf("\nenter your choice\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:append();
                   break;
            case 2:display();
                   break;
            case 3:delete();
                   break;
            case 4:search();
                   break;
            case 5:exit(1);
                    break;
            case 6:length();
                    break;
            default:printf("enter a valid option");
        } 
        
    }
    }
void append()
{
    struct node *p;
    p=(Node*)malloc(sizeof(Node));
    printf("\nEnter value?\n");  
    scanf("%d",&p->data);  
    p -> link = NULL;
    if(root == NULL)  
    {    
        root=p; 
    } 
    else
    {
        struct node *temp;
        temp=root;
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }//printf("%d",temp->data);
        temp->link=p;
    }
}

void display()
{
    struct node* temp;
    temp=root;
    if(temp==NULL) printf("\nNothing to display");
    else{
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->link;
    }
    }
}
void delete()
{
    if(root==NULL){
        printf("List is empty");
    }
    else if(root->link==NULL){
        root=NULL;
        free(root);
    }
    else
    {
        Node *temp,*temp2;
        temp=root;
        while(temp->link!=NULL){
            temp2=temp;
            temp=temp->link;
        }
        temp2->link=NULL;
        free(temp);
    }
    display();
}

void search(){
    Node* temp;
    temp=root;
    bool flag=false;
    int item,i=0;
    if(temp==NULL){
        printf("empty list");
    }
    else{
        printf("Enter element to search");
        scanf("%d",&item);
        while(temp!=NULL){
            if(temp->data==item){
                printf("Element found at %d position",i+1);
                flag=true;
                return;
            }
            else{
                flag=false;
            }
            i++;
            temp=temp->link;
        }
        if(flag==false) printf("Element not found in the linked list");
    }
}
void length(){
    Node* temp;
    temp=root;
    int count=0;
    if(temp==NULL) printf("Length is 0");
    else{
        while(temp!=NULL){
            count++;
            temp=temp->link;
        }
    printf("The length of the linked list is %d",count);
    }
}