// Find the largest of five numbers.//


#include <stdio.h>

int main() {
    int a, b, c, d, e, largest;

    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    // Compare numbers step by step
    largest = a;

    if(b > largest) largest = b;
    if(c > largest) largest = c;
    if(d > largest) largest = d;
    if(e > largest) largest = e;

    printf("The largest number is: %d\n", largest);
    return 0;
}
