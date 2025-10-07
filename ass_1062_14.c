//Check whether a number is a perfect square.//


#include <stdio.h>
void main()
{
    int num, i, flag = 0;
    printf("enter a number:");
    scanf("%d", &num);
    for(i = 1; i * i <= num; i++)
    {
        if(i * i == num)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        printf("%d is a perfect square.\n", num);
    else
        printf("%d is not a perfect square.\n", num);
}
