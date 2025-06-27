#include <iostream>
using namespace std;

// Global 3x3 game board (matrix)
char board[3][3];

// Initializes the board with empty spaces
void resetBoard() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = ' ';
}

// Prints the current state of the board
void printBoard() {
    cout << "   0   1   2\n";
    for (int i = 0; i < 3; i++) {
        cout << i << " ";
        for (int j = 0; j < 3; j++) {
            cout << " " << board[i][j];
            if (j < 2) cout << " |";
        }
        cout << "\n";
        if (i < 2) cout << "  ---+---+---\n";
    }
    cout << endl;
}

// Checks if there is a winner
char checkWinner() {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        // Check row
        if (board[i][0] != ' ' &&
            board[i][0] == board[i][1] &&
            board[i][1] == board[i][2])
            return board[i][0];

        // Check column
        if (board[0][i] != ' ' &&
            board[0][i] == board[1][i] &&
            board[1][i] == board[2][i])
            return board[0][i];
    }

    // Check main diagonal
    if (board[0][0] != ' ' &&
        board[0][0] == board[1][1] &&
        board[1][1] == board[2][2])
        return board[0][0];

    // Check secondary diagonal
    if (board[0][2] != ' ' &&
        board[0][2] == board[1][1] &&
        board[1][1] == board[2][0])
        return board[0][2];

    // No winner
    return ' ';
}

// Checks if the game is a draw (no empty spaces left)
bool isDraw() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == ' ')
                return false;
    return true;
}

// Main game loop
int main() {
    char currentPlayer = 'X'; // Player X starts
    int row, col;

    resetBoard(); // Clear the board at the beginning

    while (true) {
        printBoard(); // Show the board
        cout << "Player " << currentPlayer << " - Enter row and column (0-2): ";
        cin >> row >> col;

        // Check for invalid input or occupied cell
        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            cout << "Invalid move! Try again.\n";
            continue;
        }

        // Apply the move
        board[row][col] = currentPlayer;

        // Check for a winner
        char winner = checkWinner();
        if (winner != ' ') {
            printBoard();
            cout << "Player " << winner << " wins!\n";
            break;
        }

        // Check for a draw
        if (isDraw()) {
            printBoard();
            cout << "It's a draw!\n";
            break;
        }

        // Switch to the next player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}
