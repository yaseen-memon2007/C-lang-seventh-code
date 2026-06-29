 #include <stdio.h>
#include <string.h>

int main() {
    char password[20];

    do {
        printf("Enter Password: ");
        scanf("%19s", password);

        if (strcmp(password, "admin123") != 0) {
            printf("Incorrect Password! Try Again.\n\n");
        }

    } while (strcmp(password, "admin123") != 0);

    printf("Login Successful!\n");

    return 0;
}