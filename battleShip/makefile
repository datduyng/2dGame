CC = gcc -g 

gameOfLife: gameFunctions.o gameOfLife.c structures.h
	$(CC) gameOfLife.c gameFunctions.o -o gameOfLife.x -lncurses

gameFunctions.o: gameFunctions.c gameFunctions.h structures.h
	$(CC) -c -o gameFunctions.o gameFunctions.c
clean:
	rm -f *.o *~ gameOfLife.x
