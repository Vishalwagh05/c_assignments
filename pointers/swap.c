#include<stdio.h>
int main()
{
	int a,b,i;
	printf("Enter the two number\n");
	scanf("%d%d",&a,&b);
	printf("Before swapping A = %d B = %d \n",a,b);
	int *p=&a,*q=&b;
	i=*p;*p=*q;*q=i;
	printf("After swapping A = %d B = %d \n",a,b);


}
