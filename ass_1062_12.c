// Search for an element in an array. //


#include <stdio.h>

int main()
{
    int arr[100], size, i, f = 0, n;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    for(i = 0; i < size; i++)
    {
        printf("Enter value of %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be found: ");
    scanf("%d", &n);

    for(i = 0; i < size; i++)
    {
        if(arr[i] == n)
        {
            printf("\nElement %d found on index %d\n", n, i);
            f = 1;
            break;
        }
    }

    if(f == 0)
        printf("\nElement %d does not exist\n", n);

    return 0;
    }
