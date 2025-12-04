#include <stdio.h>

char board[3][3] = { {'1','2','3'},  // Initializing the tic-tac-toe board
                     {'4','5','6'},
                     {'7','8','9'} };

void draw() {
    printf("\n\n"); // Print two new lines for better readability
    printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
    // No return value as the function is of void type
}

int checkWin() {
	int i = 0; // Initialize loop variable
    for ( i = 0; i < 3; i++) // Check rows for a win
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return 1;

    for (i = 0; i < 3; i++) // Check columns for a win
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return 1;

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return 1; // Check main diagonal for a win

    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return 1; // Check anti-diagonal for a win

    return 0;
}

int main() {
    int player = 1, choice;
    char mark;

    while (1) {
        draw(); // Display the current state of the board
        player = (player % 2) ? 1 : 2; // Determine current player
        printf("\nPlayer %d, enter a number: ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O'; // Assign mark based on player

        int row = (choice - 1) / 3; // Calculate row index
        int col = (choice - 1) % 3; // Calculate column index

        if (choice >= 1 && choice <= 9 && board[row][col] == choice + '0')
            board[row][col] = mark; // Place the mark on the board
        else {
            printf("Invalid move!\n"); // Notify invalid move
            continue; // Skip to the next iteration
        }

        if (checkWin()) { // Check for a win
            draw(); // Display the final state of the board
            printf("\nPlayer %d wins!\n", player);
            break; // Exit the loop
        }

        player++; // Switch to the next player
    }
    return 0; // End of program
}
