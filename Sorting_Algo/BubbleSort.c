#include<stdio.h>
void main(){
    int a[]={10,11,88,3,1,0,7},i,j,temp,size,flag;
    size=sizeof(a)/sizeof(a[1]);
    printf("Array values before sorted are:\n");
    for(i=0;i<size;i++) printf("%d\t",a[i]);
    //Bubble Sort
    for (i = 0; i < size-1; i++)
    {
        flag=0;
        for ( j = 0; j < size-i-1; j++)
        {   
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
    }
    if(flag==1){
    printf("\nSorted values are:\n");
    for(i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
    }
    else printf("\nEntered array is already sorted");
}