#include <stdio.h>

void main()
{
    int a[1000], n, i, max;

    printf("\nEnter array size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    max = a[0];
    for(i = 0; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }

    printf("\nBiggest number is: %d", max);
   }
