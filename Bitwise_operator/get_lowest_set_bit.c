#include <stdio.h>
#define INT_SIZE sizeof(int) * 8 
int size=32;
int main()
{
    int num, order, i;

    printf("Enter any number: ");
    scanf("%d", &num);

    order = size - 1;

    for(i=0; i<size; i++)
    {
        if((num>>i) & 1)
        {
            order = i;

            break;
        }
    }

    printf("Lowest order set bit in %d is %d", num, order);

    return 0;
}
