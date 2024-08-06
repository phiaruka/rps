#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum MOVE {
	rock = 0,
	paper = 1,
	scissors = 2,
};
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
int main(void)
{
	srand(time(NULL));
	printf("(R)ock, (P)aper, or (S)cissors?\n");
	char move = getchar();
	int cmove = rand() % 3;
	logic(move, cmove);
	return 0;
}
