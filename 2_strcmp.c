#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char one[] = "one", two[] = "one";
	
	printf("%d\n", strcmp(one, two));
	// the value is -1 of the two are different and 0 if they are the same
	
	system("pause");
	return 0;
}
