#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>

// define
typedef struct {
  int x;
  int y;
}Coordinate;

typedef enum{
  ALIVE,
  DEAD,
}display ;


display** createGameBoard(int size)
{
    int* d = NULL;
    int i, j;
    display** gameBoard = malloc(sizeof(display*) * size);

    for (i = 0; i <= size; i++)
    {
        gameBoard[i] = malloc(sizeof(display) * size);
        for (j = 0; j < size; j++)
            gameBoard[i][j] = DEAD;
    }
    return gameBoard;
}


void displayBoard(display** gameBoard, int size)
{
    int i, j;
    for (i = 0; i <= size; i++)
    {
        for (j = 0; j <= size; j++)
            if (gameBoard[i][j] == ALIVE)
                printw("%c", 'X');
            else
                printw("%c", '-');
        printw("\n");
    }
}
