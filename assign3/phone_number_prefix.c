#include <stdio.h>

int main(void) {
	char original[8];
	printf("Please input a 7-digit phone number:");
	scanf("%s", original);
	char converted[13];
	//DO NOT modify the code above

	//TODO: Insert the area code (516) ahead of the phone number stored original array
	//For instance, if the input is 1234567 then the output is (516)1234567
	//The output must be stored in array converted (already declared in line 7)
	//You MUST use a loop to copy characters over

	/**your code here**/
	for(int i = 0, j = 0; i < 13; i++){
		if(i == 0){
			converted[i] = '(';
		}
		else if(i == 1){
			converted[i] = '5';
		}
		else if(i == 2){
			converted[i] = '1';
		}
		else if(i == 3){
			converted[i] = '6';
		}
		else if(i == 4){
			converted[i] = ')';
		}
		else{
			converted[i] = original[j];
			j++;
		}
	}
	//DO NOT modify the code below
       	printf("%s\n", converted);	
}
