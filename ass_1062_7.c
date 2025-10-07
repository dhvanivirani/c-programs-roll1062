// Print the first N odd numbers. //

#include <stdio.h>

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        printf("%d ", 2*i + 1);
    }

    return 0;
}
