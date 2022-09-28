/*

*
**
***
****
*****
 ****
  ***
   **
    *    
*/

#include<stdio.h>
const int n=5;
int main()
{
	int i,j,I,k;
	for(i=-(n);i<=n;i++)
	{ 
		if(i<0)
			I=-i;
		else
			I=i;
		for(j=1;j<=n;j++)
		{
			if(((4-I)>=j)&&((i+j)>=j))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");

	}
}

