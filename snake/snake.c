/*
 *@Author Dat Nguyen
 * Date march 18th, 2018
 *
 */


#include"gameFunctions.c"
//#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include <ncurses.h>

int main( int argc, char **argv){

  // variable
  const int size = 50;
  int ticksPerSec = 30000;

  int** board = NULL;
  Coordinate coordinate;
  createGameBoard(size);
  int i,j = 0;
  int key = 0;
  int direction = 3;// initialize the snake to go right
                    //1(UP) , 2(DOWN), 3(RIGHT), 4(LEFT)


    //Initialize Ncurses Screen
  initscr();
  cbreak();
  printw("Welcome To Snakes");
  usleep( 2 * 100000);



  while(i < size){
    clear();
    refresh();
    move(1+i,1);
    printw("X");
    refresh();
    usleep( 1 * 100000);
    i++;
  }

  /*

  //ifinit loop until exit game
  while(1){
    refresh();

    key = getch();// non blocking user input

    // user key option
    switch(key){
      case KEY_UP:
        direction = 1;
        break;
      case KEY_DOWN:
        direction = 2;
        break;
      case KEY_RIGHT:
        direction = 3;
        break;
      case KEY_LEFT:
        direction = 4;
        break;
      default:
        break;
    }// end switch



    // snake head direction
    if(direction == 1){// key up
      clear();
      refresh();
      j++;
  mvprintw(j,i,"X");
      refresh();
    }else if(direction == 2){// key down
      clear();
      refresh();
      j--;
  mvprintw(j,i,"X");
      refresh();
    }else if(direction == 3){// key right
      clear();
      refresh();
      i++;
  mvprintw(j,i,"X");
      refresh();
    }else if(direction == 4){// key left
      clear();
      refresh();
      i--;
  mvprintw(j,i,"X");
      refresh();
    }else{
    }
    usleep( 1 * 100000);// delay 2 sec



  }//end main while
*/


  //Close Ncurses Screen
  getch();
  endwin();
  printf("DEBUG: After window\n");

  return 0;
}
