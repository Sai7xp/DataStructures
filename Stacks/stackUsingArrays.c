#include<stdio.h>
int stack[100],choice,n,top,x,i,statusOfStack;
void push(void);
void pop(void);
int isEmpty(void);
void display(void);
int main()
{
    //clrscr();
    top=-1;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    do
    {
        printf("\n\t STACK OPERATIONS USING ARRAY");
        printf("\n\t--------------------------------");
        printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t  4.EXIT\n\t 5.IsEmpty");
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            case 5:
            {
                statusOfStack=isEmpty();
                if(statusOfStack==1) printf("yes stack is empty");
                else
                printf("stack has some values");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4/5)");
            }
                 
        }
    }
    while(choice!=4);
    return 0;
    getchar();
}
void push()
{
    if(top>=n-1)
    {
        printf("\n\tSTACK over flow");
         
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(!isEmpty())
    {
        printf("\n\t The popped elements is %d",stack[top--]);
        printf("\nNow the top element is %d",stack[top]);
    }
    else
    {
        printf("\n\t Stack is under flow");
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n|%d|",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
    
}

int isEmpty(){
    if(top==-1) return 1;
    else return 0;
}