#include <stdio.h>
#include <stdlib.h>

int main(){
	int all_utf;
	
	printf("UTF-8\n");
	
	for (all_utf = 0; all_utf < 255 ; all_utf++){
		char conv = all_utf;
		printf("%d = %c\n", all_utf, conv);
	}
	
	return 0;
}
