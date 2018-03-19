

/**
 *http://cc.byexamples.com/2007/04/08/non-blocking-user-input-in-loop-without-ncurses/
 *THis proram show a simple user input using curses.h
 * not kbhit
 */

int main ()
{
    int i=0;
 
    initscr();     //in ncurses
    timeout(0);
    while(!i)
    {
        usleep(1);
        i=getch();
        printw("%d ",i);
        if(i>0)
            i=1;
        else
            i=0;
    }
    endwin();
    printf("\nhitkb end\n");
    return 0;
}
