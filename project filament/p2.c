#include <stdio.h>
#define MAX_CHARS 256 
main() {
    char str[100];
    int count[MAX_CHARS] = {0}; 
    int i;

    printf("Enter any string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        count[str[i]]++;
    }

    printf("Frequency of each letter:\n");
    for (i = 0; i < MAX_CHARS; i++) {
        if (count[i] != 0) {
            printf("%c => %d\n", i, count[i]);
        }
    }
}

