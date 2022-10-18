#include<stdio.h>
int main()
{
	int data;
	printf("Enter a number : ");
	scanf("%d",&data);
	if(data & 1)
		printf("Given number is Odd.\n");
	else
		printf("Given number is Even.\n");
}

