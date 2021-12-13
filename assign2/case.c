
#include<stdio.h>
int main ()
{
    char ch;
    int no;
    printf("Enter a lowercase character :\n");
    scanf("%c", &ch);
    //TODO: convert lowercase character to uppercase. You are not allowed to use
    //if or switch. 
    no = ch - 32;
    //TODO: for instance, if ch stores char a, then char A should be stored into no
    printf("Letter in capital  : %c\n", no);
    return 0;


}
