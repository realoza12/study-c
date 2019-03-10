#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int number();

int main(){
	
	char pie[10];
	
	printf("Hello World\n");
	/*printf("HeLLOw\n");
	
	char albert[] = "walking";
	
	while (strcmp(albert, "walking") == 0){
		printf("albert is walking\n");
		
		scanf("%s", albert);
	}*/
	scanf("%s", pie);
	
	number(pie);
	
	
	
	system("pause");
	return 0;
}

int number(food){
	printf("this is new %s\n", food);
}
