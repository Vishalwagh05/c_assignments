#include <stdio.h>

int main()
{
        int size = 32;
        int mBit = 1 << (size - 1);
        int num = 0, count = 0;
        printf ("Enter the number : ");
        scanf ("%d", &num);
        while (!(num & mBit))
        {
                num = (num << 1);
                count ++;
        }
        printf ("\nNumber of leading zero's is: %d\n", count);
        return 0;
}
