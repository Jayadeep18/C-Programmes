#include <stdio.h>

int main() {
    char c;
    int flag=1;
    while (flag) {
        printf("Enter a character (0 to exit): ");
        scanf(" %c", &c);
        if (c == '0') {
            flag=0;
        }
        else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            printf("%c is a vowel.\n", c);
        } else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            printf("%c is a consonant.\n", c);
        } else {
            printf("%c is an invalid character. Try again.\n", c);
        }
    }
    printf("Program finished successfully.\n");
    return 0;
}
