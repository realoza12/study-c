#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char ch_put[] = "********";
	int loap, ch_range;
	
	for(ch_range = 0 ; ch_range < sizeof(ch_put)-1 ; ch_range++){
		
		srand(ch_put[ch_range]);
		
		for (loap = 0 ; loap < 3 ; loap++){
			printf("%d", rand() %10 );
		}
	}
	printf("\n");
	
	system("pause");
	return 0;
}
/*
a = 5880921423
b = 8755503645
empty ? = 8987575502
*/
