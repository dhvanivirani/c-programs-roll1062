//Check whether a number is perfect.//


#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num / 2; i++) {  // only check up to num/2
        if(num % i == 0) {
            sum += i;
        }
    }

    if(sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
  }
  return 0;
}
