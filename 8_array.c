#include <stdio.h>
#include <stdlib.h>

int main(){
	char ch_put[] = "a";
	int loap;
	
	srand(ch_put[1]);
	for (loap = 0 ; loap < 10 ; loap++){
		printf("%d", rand() %10 );
	}
	/*
	char more_than_element = 'á';
	printf("%d\n", sizeof(ch_put));
	printf("%c\n", ch_put[1]);
	printf("%d\n", ch_put[1]);
	printf("%d\n", ch_put[0]);
	printf("%d\n", more_than_element);
	*/
	
	system("pause");
	return 0;
}

