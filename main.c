#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#include "rps.h"

int main(void)
{
	srand(time(NULL));
	printf("(R)ock, (P)aper, or (S)cissors?\n");
	int move = pmove();
	while (move != -1) {
		int cmove = rand() % 3;
		printmove(move, cmove);
		logic(move, cmove);
		printf("Play again? (r/p/s)\n");
		printf("Any other char to quit\n\n");
		move = pmove();
	}
	return 0;
}
