 #include <stdio.h>

int main() {
    char text[100];

    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    printf("You entered:\n");
    puts(text);

    return 0;
}