#include<stdio.h>
#include"conio.h"
void main(){
    int a[]={22,66,0,5,111},i,j,key,temp,size;
    size=sizeof(a)/sizeof(int);

    //TODO Select the second element in the array and compare it with previous elements
    //if any previous elements of key element is found to be greater then do swapping
    //Insertion Sort
    for(i=1;i<size;i++){
        key=a[i];
        j=i-1;
        while(j>=0&&a[j]>key){
             a[j+1]=a[j];
             j--;
        }
        a[j+1]=key;
    }
    printf("\nSorted values are:\n");
    for(i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
}