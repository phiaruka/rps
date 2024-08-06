#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "rps.h"

void win(void)
{
	printf("u win nigga\n");
}
void tie(void)
{
	printf("das a tie\n");
}
void loss(void)
{
	printf("L bozo\n");
}
int logic(char move, int cmove)
{
	switch (cmove) {
	case rock:
		printf("Computer played ROCK\n");
		break;
	case paper:
		printf("Computer played PAPER\n");
		break;
	case scissors:
		printf("Computer played SCISSORS\n");
	}
	switch (move) {
	case 'R':
	case 'r':
		switch (cmove) {
		case rock:
			tie();
			break;
		case paper:
			loss();
			break;
		case scissors:
			win();
			break;
		}
		break;
	case 'P':
	case 'p':
		switch (cmove) {
		case rock:
			win();
			break;
		case paper:
			tie();
			break;
		case scissors:
			loss();
			break;
		}
		break;
	case 'S':
	case 's':
		switch (cmove) {
		case rock:
			loss();
			break;
		case paper:
			win();
			break;
		case scissors:
			tie();
			break;
		}
		break;
	default:
		printf("r u retahded\n");
		return 1;
	}
	return 0;
}
