#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b;
	int num[2][3] = {
					{1,2,3},
					{4,5,6}
					};
	
	for (a = 0; a < 2; a++){
		for (b = 0; b < 3; b++){
			printf("%d", num[a][b]);
		}
	printf("\n");
	}
	
	return 0;
}
