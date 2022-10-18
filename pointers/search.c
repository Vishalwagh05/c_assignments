#include<stdio.h>
int n=5;
int main()
{
	int i,*p,a,arr[n];
	printf("Enter the Array element\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter the searching element\n");
	scanf("%d",&a);
	p = &a;
	for(i=0;i<n;i++)
	{
		if(arr[i] == *p)
		{
			printf("Searching element is present = %d \n",*p);
			return 0;
		}
	}
	printf("Searching element is not present \n");
}
