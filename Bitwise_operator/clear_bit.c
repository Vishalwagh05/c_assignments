

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
        num=num&(~(1<<pos));
        printf("\n");
        for(bit=7;bit>=0;bit--)
        {
                printf("%d",((num>>bit)&1));
        }


}

