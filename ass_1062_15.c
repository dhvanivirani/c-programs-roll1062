// Convert all vowels in a string to uppercase. //


#include <stdio.h>

void convertVowelsUppercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
            str[i] == 'o' || str[i] == 'u') {
            str[i] = str[i] - 32;   // convert to uppercase
        }
    }
}

int main() {
    char str[200];

    printf("Enter a string: ");
    scanf("%d\n]", str);  

   convertVowelsUppercase(str);

    printf("Converted string: %s\n", str);

    return 0;
}
