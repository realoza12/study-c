/*The program still run without preprocessor command
when using built-in function (compiler?)*/

int main(){
	printf("size of int: %d\n", sizeof(int));
	char poop[10];
	printf("char poop: %s", strcpy(poop, "pork"));
	
	return 0;
}
