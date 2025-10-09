#include "tictactoe.h"
#include <stdio.h>

int main(void) {
    int board[9];
    int current = P1;
    int status = 0;

    init_board(board);

    while ((status = winner(board)) == 0) {
        int cell = -1;
        print_board(board);
        printf("Player %d (%c) enter cell [0-8]: ", current, current==P1?'X':'O');
        if (scanf("%d", &cell) != 1) return 0;
        if (!place_move(board, cell, current)) {
            puts("Invalid move, try again.");
            continue;
        }
        current = (current == P1) ? P2 : P1;
    }

    print_board(board);
    if (status == 3) puts("Draw.");
    else printf("Player %d (%c) wins!\n", status, status==P1?'X':'O');
    return 0;
}