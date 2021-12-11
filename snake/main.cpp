#include "snake.h"

int main(){ 
	srand(time(NULL));
	SetUp();
	while(!gameOver){
		Draw();
		Input();
		Algorithm();
	}
	return 0;
}
