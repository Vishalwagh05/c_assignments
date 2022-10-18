#include <stdio.h>
int size=32;
int main()
{
    int num, count, i;

    printf("Enter any number: ");
    scanf("%d", &num);

    count = 0;

    for(i=0; i<size; i++)
    {
        if((num >> i ) & 1)
        {
            break;
        }

        count++;
    }

    printf("Total number of trailing zeros in %d is %d.\n", num, count);

}
