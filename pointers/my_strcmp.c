#include<stdio.h>
int str_cmp(char *,char *);
int main()
{
	char s[20],d[20];
	int i;
	printf("Enter the Any two strings\n");
	scanf("%s%s",s,d);
	i=str_cmp(s,d);
	if(i==0)
		printf("Both string are same\n");
	 else if(i<0)
		printf("S1 is greater than S2\n");
	else
		printf("S1 is lesser than S2\n");
}
int str_cmp(char *p,char *q)
{
	while(*p && *q)
	{
		if(*p != *q)
			break;
		p++;
		q++;
	}
	if(*p == *q)
		return 0;
	else if(*p > *q)
		return 1;
	else
		return -1;
}
