
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the two  number\n");
	scanf("%d%d",&a,&b);
	int *p,*q;
	p = &a;
	q = &b;
	printf("Add two number %d + %d = %d\n",a,b,(*p+*q));

}
