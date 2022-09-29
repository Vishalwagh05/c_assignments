
#include<stdio.h>
int main()
{
        int num, pos, bit;
        printf("Enter the number = ");
        scanf("%d",&num);
        for(bit=7;bit>0;bit--)
        {
                printf("%d",(num>>bit)&1);
        }
        if(num&=(1<<7))
                printf("\nBit is set\n");
        else
                printf("\n Bit is clear \n");

}

