#include <stdio.h>

int main()
{
    int num, flip;

    printf("Enter any number: ");
    scanf("%d", &num);

    flip = ~num;

    printf("Original number = %d (in decimal)\n", num);
    printf("Number after bits are flipped = %d", flip);

}
