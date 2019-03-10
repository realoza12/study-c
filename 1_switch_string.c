#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	printf("Switch string test\n");
	
	char poop;

	printf("set initial value for poop:\n");
	scanf("%c", &poop);
	printf("the current value of poop is %c\n", poop);
	
	switch (poop){
		case 'a' :
			printf("ding dong\n");
			break;
	}
	
	// switch can't use string
	
	system("pause");
	return 0;
}
