#include<stdio.h>
char tower(int n,char f,char t,char a)
{
    if(n==1)
    {
   printf("\ndisk moved from %c to %c",f,t);
    return;
    }
        tower(n-1,f,a,t);
        printf("\ndisk moved from %c to %c ",f,t);
        // printf("\n");
        tower(n-1,a,t,f);
        return 0;
}
main(){
int n=2;
tower(n,'A','C','B');
}
