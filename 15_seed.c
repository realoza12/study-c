#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char argv[]){
	int seed_length, seed_gen;
	
	printf("<>---<> seed generating <>---<>\n");
	char seed_string[seed_length];
	srand(time(NULL));
	
	for (seed_gen = 0; seed_gen < sizeof(seed_string); seed_gen++){
		char conv = (rand() %94) + 33;
		seed_string[seed_gen] = conv ;
	}
	printf("%s", seed_string);
	
	return 0;
}
