#include<stdio.h>
char stackArr[20];
int top = -1;

void push(char x){
    stackArr[++top]=x;
}

char pop(){
    if(top==-1) return -1;
    else return stackArr[top--];
}

int priority(char x){
    if(x=='(')
    return 1;
    if(x=='+' || x=='-')
    return 2;
    if(x=='/' || x=='*')
    return 3;
}
main(){
    char exp[20];
    char *e,x;
    printf("Enter the exp:");
    scanf("%s",&exp);
    e=exp;
    
    while(*e != '\0')
    {
        if(isalnum(*e))
            printf("%c",*e);
        else if(*e=='(')
            push(*e);
        else if(*e==')')
        {
            while((x=pop())!='(')
                printf("%c",x);
        }
        else
        {
            while(priority(stackArr[top])>=priority(*e))
                printf("%c",pop());
            push(*e);
        }
        e++;
    }
    while(top!=-1){
        printf("%c",pop());
    }
}