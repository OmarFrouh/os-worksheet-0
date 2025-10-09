#include "tictactoe.h"
#include <stdio.h>

static int lines[8][3] = {
    {0,1,2},{3,4,5},{6,7,8},
    {0,3,6},{1,4,7},{2,5,8},
    {0,4,8},{2,4,6}
};

void init_board(int *board) {
    for (int i = 0; i < 9; i++) board[i] = EMPTY;
}

int place_move(int *board, int idx, int player) {
    if (idx < 0 || idx >= 9) return 0;
    if (board[idx] != EMPTY) return 0;
    board[idx] = player;
    return 1;
}

int winner(const int *board) {
    for (int i = 0; i < 8; i++) {
        int a = lines[i][0], b = lines[i][1], c = lines[i][2];
        if (board[a] && board[a] == board[b] && board[b] == board[c]) return board[a];
    }
    for (int i = 0; i < 9; i++) if (board[i] == EMPTY) return 0;
    return 3;
}

void print_board(const int *board) {
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            int v = board[r*3 + c];
            char ch = v == P1 ? 'X' : (v == P2 ? 'O' : '.');
            printf("%c ", ch);
        }
        putchar('\n');
    }
}