#include<stdio.h>
int n=5;
int main()
{
	int arr[n],arr1[n],*p,i;
	printf("Enter the Array element\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	p=arr;
	printf("Printing the another array elements\n");
	for(i=0;i<n;i++)
		printf("%d ",arr1[i]=p[i]);
	printf("\n");
}
