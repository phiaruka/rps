enum MOVE {
	rock = 0,
	paper = 1,
	scissors = 2,
};

void win(void);
void tie(void);
void loss(void);
int logic(int, int);
int pmove(void);
void printmove(int, int);
