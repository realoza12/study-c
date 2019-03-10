#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char ch_put[] = "********";
	int c, k, n, ch_range;
	

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
	
	system("pause");
	return 0;
}

