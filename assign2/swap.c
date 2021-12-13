#include <stdio.h>

int main(void) {
    int a, b;
    printf("please enter 2 numbers to be swapped\n");
    scanf("%d%d", &a, &b);

    printf("before:a=%d, b=%d\n",a,b);

    //TODO: swap the value of a and b
    //TODO: for instance, if a=3, b=4
    //TODO: then after swap a=4, b=3
    int temp = a; 
    a = b;
    b = temp; 
    printf("after:a=%d, b=%d\n",a,b);
    return 0;
}
