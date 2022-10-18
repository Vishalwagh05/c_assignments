#include <stdio.h>

int main()
{
        unsigned int num;
        printf("enter the number : \n");
        scanf("%d",&num);
        int count=0,store=-1;
        while(num!=0)
        {
                if(num & 1 == 1)
                        store=count;
                num=num>>1;
                count++;
        }

        if(store==-1)
        {
                printf("No bit is set\n");
                return 0;
        }
        printf("Highest bit set ");
        printf("in its binary representation: %d \n",store);

        return 0;
}

