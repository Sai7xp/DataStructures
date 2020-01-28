#include<stdio.h>
int main()
{
	int arr[100];
	int i,n,key=10;
	printf("enter size");
	scanf("%d",&n);
	printf("Enter elements");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]==key){
			printf("element found");
			return ;
		}
	}
	printf("Not found");
}