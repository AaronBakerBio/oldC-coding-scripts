/* 	Aaron Baker, CS 201, Professor : Jesse Chaney
	4-14-2022
	Lab 1 Part 1: Front 
	Program that opens a specified file and returns the specified number of lines
	from that file to std out.
*/

//Libraries and purpose//
#include <stdio.h> // Used to access fopen() and fclose() functions // 
#include <stdlib.h> // Used to access function atoi() for converting string to int //

//Macros//
#define MAX_LINE_LENGTH 1000

// Main body of program // 
int main(int argc, char* argv[]){
	int i = 1; // Loop variable for lines in file //
	char my_line[MAX_LINE_LENGTH];

	// Open the file and make the pointer //
	FILE* front;
	front = fopen(argv[2],"r");		
		
	// Loop for reading through lines in the file // 
	if (argc <= 1 || argv[1] <= 0){
		printf("%s", "No arguments passed");
	}
	else
	{
		for(i; i <= atoi(argv[1]); ++i){
		fgets(my_line,MAX_LINE_LENGTH,front);
		printf("%i %s", i,  my_line);
		}
	}
	// Close the file //
	fclose(front);
	/* exit program */
	return 0;
}
