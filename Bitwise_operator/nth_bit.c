
#include<stdio.h>
int main()
{
        int num, pos, bit;
        printf("Enter the number = ");
        scanf("%d",&num);
        printf("Enter the bit position = ");
        scanf("%d",&pos);
        for(bit=7;bit>=0;bit--)
        {
                printf("%d",((num>>bit)&1));
        }

        printf("\n");
        printf("nth bit position is : %d\n",((num>>pos)&1));
}

