
#include<stdio.h>
int str_len(char *);
int main()
{
	int i;
	char s[20];
	printf("Enter the any string \n");
	scanf("%s",s);
	i=str_len(s);
	printf("Length of string %s = %d\n",s,i);
}
int str_len(char *p)
{
	int i;
	for(i=0;p[i];i++);
	return i;
}

