#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char ch_put[] = "********";
	int loap, ch_range;
	int c, k, n;
	
	printf("VVRGLTg=\n");
	for(ch_range = 0 ; ch_range < sizeof(ch_put)-1 ; ch_range++){
		
		n = ch_put[ch_range];
		//printf("%d\n", n);
		for (c = 7 ;c >= 0; c--){
			
			k = n >> c;
			
			if (k & 1){
				printf("1");
			}else{
				printf("0");
			}
		}
		printf("\n");
	}	
	
	printf("\n");
	printf("R0NDcmFuZCUxMMOXMTI=\n");
	for(ch_range = 0 ; ch_range < sizeof(ch_put)-1 ; ch_range++){
		
		srand(ch_put[ch_range]);
		
		for (loap = 0 ; loap < 12 ; loap++){
			printf("%d", rand() %10 );
		}
	printf("\n");
	}
	
	printf("\n");
	
	system("pause");
	return 0;
}
