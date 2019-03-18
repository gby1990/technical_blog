
#include "stdio.h"
//global variable defined hier to show if the relation between module main.o and display.o could find the global variables
char welcom[] = "this is the first project made by bgong";

void print_string(char string[]){ 
	printf("%s\n",string);
}
void print_num(int *num){
	printf("%i\n",*num);
}
