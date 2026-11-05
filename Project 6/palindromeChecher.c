#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int isPalindrome = 1;

    printf("Enter any string: ");
    scanf("%s", str);

    // Calculate length manually without string functions
    while (str[length] != '\0') {
        length++;
    }

    // Compare characters from both ends moving inward
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("The given string is a Palindrome.\n");
    } else {
        printf("The given string is not a Palindrome.\n");
    }

    return 0;
}