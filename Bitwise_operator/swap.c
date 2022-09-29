


#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter the numbers:");
	scanf("%d%d",&num1,&num2);
	printf("Before swap the number  num1 = %d  num2 = %d\n",num1,num2);

	num1=num1^num2;
	num2=num2^num1;
	num1=num1^num2;


	printf("After swap the number  num1 = %d  num2 = %d\n",num1,num2);

}
