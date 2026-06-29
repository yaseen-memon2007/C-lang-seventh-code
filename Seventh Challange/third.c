 #include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i;

    printf("\nEnter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }

    printf("\nUppercase String: %s\n", str);

    return 0;
}