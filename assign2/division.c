
#include <stdio.h>

int main() {
	float res;
	int i = 3;
	int p = 2;		

	res =  i / (float)p; 
	//TODO: this prints out 1.000000 because / is an integer division
	//TODO: please modify it so the division yields a real number (1.500000 in this case)	
	//hint: try to make either divisor or dividend a float type
	printf("%f\n", res);
	return 0;
}
