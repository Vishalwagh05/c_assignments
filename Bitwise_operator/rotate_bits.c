#include<stdio.h>


int size=32;
int leftRotate(int num, unsigned int pos)
{
	return (num << pos)|(num >> (size - pos));
}
int rightRotate(int num, unsigned int pos)
{
	return (num >> pos)|(num << (size - pos));
}

int main()
{
	int num ;
	int pos ;
	int result;
	printf("Enter the integer and the position : ");
	scanf("%d%d",&num,&pos);
	printf("Left Rotation of %d by %d is :  ", num, pos);
	result= leftRotate(num, pos);
	printf("%d\n", result);
	printf("Right Rotation of %d by %d is : ", num, pos);
	result=rightRotate(num, pos);
	printf("%d\n", result);
}
