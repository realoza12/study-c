#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	char beef[30];
	char pork[30];
	printf("beef: ");
	scanf("%s", beef);
	printf("pork: ");
	scanf("%s", pork);
	
	for(;;){
		printf("%s\n", beef);
		printf("%s\n", pork);
	}
}
