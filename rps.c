#include <stdio.h>

#include "rps.h"

void win(void)
{
	printf("u win piss\a\n");
}
void tie(void)
{
	printf("das a tie\n");
}
void loss(void)
{
	printf("L bozo\n");
}

int pmove(void)
{
	char c = getchar();
	while (getchar() != '\n')
		;
	if (c == 'r' || c == 'R')
		return rock;
	if (c == 'p' || c == 'P')
		return paper;
	if (c == 's' || c == 'S')
		return scissors;
	printf("broke as hell\n");
	return -1;
}

void printmove(int move, int cmove)
{
	switch (move) {
	case rock:
		printf("You played rock\n");
		break;
	case scissors:
		printf("You played scissors\n");
		break;
	case paper:
		printf("You played paper\n");
		break;
	}
	switch (cmove) {
	case rock:
		printf("Computer played rock\n");
		break;
	case scissors:
		printf("Computer played scissors\n");
		break;
	case paper:
		printf("Computer played paper\n");
		break;
	}
}

int logic(int move, int cmove)
{
	if (cmove == move)
		tie();
	else if ((move == rock && cmove == scissors) ||
		 (move == paper && cmove == rock) ||
		 (move == scissors && cmove == paper))
		win();
	else
		loss();
	return 0;
}
