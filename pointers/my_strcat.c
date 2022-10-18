#include<stdio.h>
char * str_cat(char *,char *);
int main()
{
	char s[20],d[40];
	printf("Enter the Main string and Substring\n");
	scanf("%s%s",s,d);
	printf("Main string = %s\nSubstring = %s\n",s,d);
	str_cat(s,d);
	printf("Concatenate String = %s\n",s);
}
char * str_cat(char *p,char *q)
{
	int i,j;
	for(i=0;p[i];i++);
	for(j=0;p[i]=q[j];i++,j++);
	return p;

}


