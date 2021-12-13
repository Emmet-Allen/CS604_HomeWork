//There are memory leaks and out-of-bound access in the code
//TODO: Please fix all the memory bugs 
//Your code will be tested against Valgrind to ensure there are no memory violations. 
//The output of the program (what it prints) should not change.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){

  int i, *a;

  a = malloc(sizeof(int)*10);

    // Do not include 10, memory only allocate for 0 to 9
  for(i=0;i < 10; i++){
    a[i] = i;
  }
  for(i=0;i < 10; i++){
    printf("%d\n", a[i]);
  }
  // free memory of a
  free(a);

}