/* Aaron Baker, Cs201
 Professor : Jesse Chaney

Program : Part 1 
 This program is used to compare two strings, case insensitive.


*/

#include <math.h> // for power function
#include <stdio.h>

char vstrtoupper(char upper){
	int convupper = pow(2,5); // Value to subtract if value is lowercase to make it uppercase
	if(upper <= 0x7A && upper >= 0x61){
		upper -= convupper;
		} 	
	return upper;
}


int vstrcasecmp(char * first, char *second){
	size_t len = 0; // This is the value used to step through index by index through my strings
	size_t condition = 0; // A condition of 1 indicates that the value of string 1 was greater than string 2 at the first nonmatching char index. A condition of 
	// -1 indicates that string 2's value was greater than string 1's value at the first nonmatching char index. A condition of zero indicates that both strings
	// matched (case insensitive). 
	while(first[len] != '\0' && second[len] != '\0'){	
		if(vstrtoupper(first[len]) > vstrtoupper(second[len])){
			condition = 1;
			break;
		}
		else if (vstrtoupper(first[len]) < vstrtoupper(second[len])){
			condition = -1;
			break;
		}
		++len;
	}
	if (first[len] == '\0' && second[len] != '\0'){
		condition = -1;
	}
	else if(first[len] != '\0' && second[len] == '\0'){
		condition = 1;
	}
	return condition;
}


// Initial testing of function
/*int main(){
	char dank[] = "Wowz";
	char owow[] = "WowZer";
	printf("\n%d\n%s\n%s\n",vstrcasecmp(dank, owow), owow, dank);
		
	return 0;
}*/ 
