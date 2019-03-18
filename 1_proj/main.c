#include "math.h"
#include "display.h"

extern int firstNum, secondNum;
extern char welcom[]; 


int main(void){
	print_string(welcom);
	//call add func in math module

	int sum = add(&firstNum, &secondNum);
	//local variable to print a string for explanation of sum 
	char string[] = " the sum of 10 and 23 equals:\n";
	print_string(string);
	print_num(&sum);
	return 0;
}
