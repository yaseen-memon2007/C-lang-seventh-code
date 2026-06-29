 #include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    int i, length;
    char temp;

    length = strlen(str);

    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    reverse(str);

    printf("Reversed String: %s\n", str);

    return 0;
}