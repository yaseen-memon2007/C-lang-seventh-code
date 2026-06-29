 #include <stdio.h>
#include <string.h>
#include <ctype.h>

void trim(char str[]) {
    int start = 0, end, i;

    while (isspace(str[start])) {
        start++;
    }

   
    i = 0;
    while (str[start] != '\0') {
        str[i++] = str[start++];
    }
    str[i] = '\0';

   
    end = strlen(str) - 1;
    while (end >= 0 && isspace(str[end])) {
        str[end] = '\0';
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    trim(str);

    printf("Trimmed String: \"%s\"\n", str);

    return 0;
}