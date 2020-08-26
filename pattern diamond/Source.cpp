#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
    int n, loop, x, row, sp, i = 2;
    scanf("%d", &n);
    sp = n - 1;
    x = 1;
    for (row = 0; row < (n * 2) - 1; row++)
    {
        for (loop = 0; loop < abs(sp); loop++)
        {
            printf(" ");
        }
        for (loop = 0; loop < x; loop++)
        {
            printf("*");
        }
        printf("\n");
        sp--;
        if (row == n - 1)
        {
            i = -2;
        }
        x += i;
    }
    return 0;
}
