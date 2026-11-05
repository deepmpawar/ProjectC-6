#include <stdio.h>

int main() {
    char str[100];
    int freq[100];
    int length = 0;

    printf("Enter any string: ");
    scanf("%s", str);

    while (str[length] != '\0') {
        freq[length] = -1;
        length++;
    }

    for (int i = 0; i < length; i++) {
        int count = 1;
        for (int j = i + 1; j < length; j++) {
            if (str[i] == str[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }

    printf("Frequency of each letter:\n");
    for (int i = 0; i < length; i++) {
        if (freq[i] != 0) {
            printf("%c => %d\n", str[i], freq[i]);
        }
    }

    return 0;
}