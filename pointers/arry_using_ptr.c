#include<stdio.h>
int main()
{
	int i,arr[5];
	int *p= arr;
	printf("Enter the 5 Array element \n");
	for(i=0;i<5;i++)
		scanf("%d",&p[i]);
	printf("Print array element \n");
	for(i=0;i<5;i++)
		printf("%d ",*(p+i));
	printf("\n");



}
