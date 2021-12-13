#include <stdio.h>

int main(void) {
	int i;
	int sum;
	
	//TODO: Please replace the three ???s in line 12 so that the loop calculates
	//the sum of all the odd numbers from 1 to 1000 (that is: 1+3+5...+999)
	//You are only allowed to modify the ??? 
	//You may NOT change < to <=.
	sum = 0;
	for(i=1, sum=0; i<1000; i+=2) {
		sum = sum + i;
	}
	printf("the sum is %d\n", sum);
	return 0;
}