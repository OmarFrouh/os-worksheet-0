#ifndef TICTACTOE_H
#define TICTACTOE_H

#define EMPTY 0
#define P1    1
#define P2    2

void init_board(int *board);
int  place_move(int *board, int idx, int player);
int  winner(const int *board);          /* 0=none, 1=P1, 2=P2, 3=draw */
void print_board(const int *board);

#endif