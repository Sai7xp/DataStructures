#include<stdio.h>
int main(){
    int a[]={22,33,1,0,8},i,j,min,temp,size;
    size=sizeof(a)/sizeof(a[0]);
    printf("Array values before sorted are:\n");
    for(i=0;i<size;i++) printf("%d\t",a[i]);

    //todo select min element from the list and swap it with the first element in the array(ascending order)
    //Selection Sorting
    for(i=0;i<size-1;i++){
        min=i;
        for(j=i+1;j<size;j++){
            if(a[j]<a[min]){
              min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp; 
    }
    printf("\nSorted values are:\n");
    for(i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
}