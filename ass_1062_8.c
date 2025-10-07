//Calculate the circumference of a circle.//


#include <stdio.h>

int main() {
    float radius, circumference;
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    circumference = 2 * 3.1416 * radius;

    printf("Circumference of the circle: %.2f\n", circumference);
    return 0;
}
