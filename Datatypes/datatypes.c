#include<stdio.h>
int main()
{
	char ch;
	unsigned char ch1;

	short int a;
	unsigned short int b;

	int c;
	unsigned int d;

	float e;
	double f;

	long int g;
	unsigned long int h;

	printf("char		   = %lu\n",sizeof(ch));
	printf("unsigned char	   = %lu\n",sizeof(ch1));

	printf("short int 	   = %lu\n",sizeof(a));
	printf("unsigned short int = %lu\n",sizeof(b));

	printf("int 		   = %lu\n",sizeof(c));
	printf("unsigned int 	   = %lu\n",sizeof(d));

	printf("float		   = %lu\n",sizeof(e));
	printf("double 		   = %lu\n",sizeof(f));

	printf("long int 	   = %lu\n",sizeof(g));
	printf("unsigned long int  = %lu\n",sizeof(h));
}
