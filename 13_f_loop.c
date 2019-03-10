#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void f_loop();

int main(){
	
	printf("you guess\n");
	srand(time(NULL));
	int rand_num = rand() %10;
	f_loop(rand_num , 3);
	printf("the number is %d", rand_num);
	
	return 0;
}

void f_loop(int number, int life){
	int guess;
	
	printf("enter a number: ");
	scanf("%d", &guess);
	
	if (guess == number){
		printf("you win\n");
	}else if (life == 0){
		printf("game over\n");
	}else{
		printf("you're wrong\tlife:%d\n", life);
		life -= 1;
		f_loop(number, life);
	}
}