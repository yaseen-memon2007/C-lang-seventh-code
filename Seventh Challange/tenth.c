 #include <stdio.h>
#include <string.h>

int main() {
    char input[100];

    while (1) {
        printf("Enter a word (type 'exit' to quit): ");
        scanf("%99s", input);

        if (strcmp(input, "exit") == 0) {
            printf("Exiting the program...\n");
            break;
        }

        printf("You entered: %s\n\n", input);
    }

    return 0;
}