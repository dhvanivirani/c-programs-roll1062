//Print first N multiples of a number.//


#include <stdio.h>

int main() {
    int num, N;
    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter how many multiples you want: ");
    scanf("%d", &N);

    printf("First %d multiples of %d are:\n", N, num);
    for(int i = 1; i <= N; i++) {
        printf("%d ", num * i);
  }
    return 0;
}
