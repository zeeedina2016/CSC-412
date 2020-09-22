#include <stdio.h>
#include <stdlib.h>

/* This program takes in 3 arguments, one of them being the executable file, and prints them out*/
int main(int argc, char *argv[]) {
/*made conditionals that states if there are 3 arguments*/
/*if the argument is equal to 3, print the statements*/
	if(argc == 3) {
		printf("The executable was launched with two arguments: %s \n", argv[0]);
		printf("\tThe first argument is: %d, \n",atoi(argv[1]));
		printf("\tThe second argument is: %s. \n",argv[2]);
		
		return 0;
	}
	/*if the argument is greater than 3, print warning and return error code 2*/
	else if(argc > 3){
		printf("usage: <name> <argument1> <argument2> \n");
		
		return 2;
	/*If any other condition occurs, print format, and return error code 1*/
	} else{
	
		printf("usage: <name> <argument1> <argument2> \n");
		
		return 1;
		
	}
}
