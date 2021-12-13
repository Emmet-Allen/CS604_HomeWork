#include <stdio.h>
int main() {

    short min_short, max_short;

    //TODO: Please find the range of short type, and print out the min and max of short in decimal
    //You are not allowed to hard-code any numbers in decimals
    //You are allowed to hard-code binaries/hex values
    //No loop or if is allowed

    min_short = 0b1000000000000000;
    max_short = 0b0111111111111111;

    printf("%hd ", min_short);
    printf("%hd\n", max_short);
    return 0;
}
