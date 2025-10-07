// Check whether a number is Armstrong. //


#include <stdio.h>
void main()
{
    int i, a, b, c, d = 0;
    printf("Enter the number: ");
    scanf("%d", &a);
    for(i = a; i != 0; i = i / 10)
    {
        b = i % 10;
        c = b * b * b;
        d = d + c;
    }
    if(d == a)
    {
        printf("
%d is a armstrong number", a);
    }
    else
    {
        printf("
%d is not a armstrong number", a);
    }
}
