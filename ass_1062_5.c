// Insert an element at a specific position in an array.//


#include <stdio.h>

void main()
{
    int a[100], n, i, pos, num;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the position where you want to insert: ");
    scanf("%d", &pos);

    printf("Enter the number to insert: ");
    scanf("%d",&num);
    for(i = n; i >= pos; i--)
        a[i] = a[i - 1];

    a[pos - 1] = num; 
     n++;              

    printf("\nArray after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
}
