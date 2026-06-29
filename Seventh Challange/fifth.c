#include <stdio.h>

int main() {

    char board[3][3];
    int i, j;

    printf("Enter the Tic-Tac-Toe board (X, O or -):\n\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter value for position [%d][%d]: ", i, j);
            scanf(" %c", &board[i][j]);
        }
    }

    printf("\nTic-Tac-Toe Board:\n\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);

            if (j < 2)
                printf("|");
        }

        printf("\n");

        if (i < 2)
            printf("-----------\n");
    }

    return 0;
}