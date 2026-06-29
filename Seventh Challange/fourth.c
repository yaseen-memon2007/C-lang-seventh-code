 #include <stdio.h>
#include <string.h>

int main() {
    char password[] = "admin123";
    char input[50];

    printf("Enter Password: ");
    scanf("%49s", input);

    if (strcmp(password, input) == 0) {
        printf("Login Successful!\n");
    } else {
        printf("Incorrect Password!\n");
    }

    return 0;
}