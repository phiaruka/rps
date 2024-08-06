#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#include "rps.h"

int main(void)
{
	srand(time(NULL));
	printf("(R)ock, (P)aper, or (S)cissors?\n");
	char move = getchar();
	int cmove = rand() % 3;
	logic(move, cmove);
	return 0;
}
