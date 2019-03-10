#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_1();

int main(){
	
	printf("\t   Calculator v2\n");
	printf("--------------------------------------\n");
	printf("There are no exeption handler in c so \nletters will give some weird results\n");
	printf("--------------------------------------\n");
	printf("      values used are integer\n");
	printf("--------------------------------------\n\n");
	
	
	char loop_hole[10];
	
	while (strcmp(loop_hole, "end") != 0){
		
		int first_num, second_num, answer_num;
		char q_repeater;
		char operation_num[30];
		
		printf("first number:");
		scanf("%d", &first_num);
		printf("second number:");
		scanf("%d", &second_num);
		
		print_1();
		
		while (q_repeater != 'a'){
			
			scanf("%s", operation_num);
			if (strcmp(operation_num, "addition") == 0){
				printf("sum : %d\n", first_num + second_num);
				q_repeater = 'a';
			}else if (strcmp(operation_num, "subtraction") == 0){
				printf("difference : %d\n", first_num - second_num);
				q_repeater = 'a';
			}else if (strcmp(operation_num, "multiplication") == 0){
				printf("product : %d\n", first_num * second_num);
				q_repeater = 'a';
			}else if (strcmp(operation_num, "division") == 0){
				printf("quotient : %d\n", first_num / second_num);
				q_repeater = 'a';
			}else{
				printf("please enter again\n");
			}
		}
		
		while(q_repeater == 'a'){
			printf("do you want to calculate again? (y/n) \n");
			scanf("%s", &q_repeater);
			
			if (q_repeater == 'n'){
				strcpy(loop_hole, "end");
				q_repeater = 'b';
			}else if(q_repeater == 'y'){
				q_repeater = 'b';
			}else {
				printf("please enter again");
			}
		}
	}
	system("pause");
	return 0;
}

void print_1(){
		printf("what operation do you want to make?\n");
		printf("type \"addition\" to get the sum\n");
		printf("type \"subtraction\" to get the difference\n");
		printf("type \"multiplication\" to get the product\n");
		printf("type \"division\" to get the quotient\n");
}
