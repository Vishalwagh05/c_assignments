#include <stdio.h>

void count_1s_0s(int num)
{
        int count0 = 0, count1 = 0;

        while (num > 0) {

                if (num & 1) {
                        count1++;
                }

                else {
                        count0++;
                }

                num = num >> 1;
        }

        printf("Count of 0s in N is %d\n", count0);
        printf("Count of 1s in N is %d\n", count1);
}

int main()
{
        int num;
        printf("Enter the integer: ");
        scanf("%d",&num);

        count_1s_0s(num);
}
