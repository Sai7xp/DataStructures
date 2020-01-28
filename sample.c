#include<stdio.h>
void fun(int* x){
    *x=80;
}
void main(){ int z=30;
    fun(&z);
    printf("%d",z);
}
