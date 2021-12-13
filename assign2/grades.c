// calculate total and average of a student's grades

#include<stdio.h>
int main()
{
    //TODO: please declare the right types for variables by
    //replacing ??? with types
    int a,b,c,d,e;
    float total,average;
    printf("please enter grades of 5 subjects : \n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    //TODO calculate total and average of a student's grade
    total = a + b + c + d + e; 
    average = total / 5; 
    //TODO again beware of integer division, if you enter 1,2,2,2,2 then average is expected to be 1.8 instead of 1
    printf("Total grade = %f\n", total);
    printf("Average grade = %f\n",average );
    return 0;

}
