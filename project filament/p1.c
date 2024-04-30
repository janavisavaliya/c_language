#include <stdio.h>
main() {
    char str[100];
    int i, length;
    int Palindrome = 1; 

    printf("Enter any string: ");
    gets(str);

    length = 0;
    while (str[length] != '\0') {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            Palindrome = 0; 
        }
    }

    if (Palindrome) {
        printf("Given string is a Palindrome.\n");
    } else {
        printf("Given string is not a Palindrome.\n");
    }

}

