#include<stdio.h>
int size=32;
int main()
{
    int num, index, i;
    int bin[size];

    printf("Enter any number: ");
    scanf("%d", &num);

    index = size - 1;

    while(index >= 0)
    {
        bin[index] = num & 1;

        index--;

        num >>= 1;
    }

    printf("Binary is : ");
    for(i=0; i<size; i++)
    {
        printf("%d", bin[i]);
    }
printf("\n");

}
