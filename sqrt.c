/* This program computes the square root of a
positive number. */
// Initial Working Code for Square root
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Generate Conflict");
		printf("Is Conflict Generated");
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}
	int input = atoi(argv[1]);
	if(input<0){
		printf("Sqrt of %d is %f\n i",input,sqrt(input));
	}
	else{
		printf("Sqrt of %d is %f\n",input,sqrt(input));
	}
	return(0);

} // end main
