//Compare lengths of two strings. //


#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);  
    
    printf("Enter second string: ");
    gets(str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 > len2)
        printf("The first string is longer.\n");
    else if (len2 > len1)
        printf("The second string is longer.\n");
    else
        printf("Both strings are of equal length.\n");

    return 0;
}
