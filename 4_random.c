#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	printf("this is a rand() generator\n");
	printf("--------------------------\n\n");
	
	//int rand_char;
	int rand_int;
	//unsigned int rand_char;
	
	//rand_char = 'a';
	
	srand(time(NULL));
	
	printf("%d\n", rand() %255 + 1);
	printf("%d\n", rand());
	
	
	system("pause");
	return 0;
}
