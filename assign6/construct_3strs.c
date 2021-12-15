//For all construct_*.c questions, please follow the tutorial/instructions here:
//https://docs.google.com/document/d/1HHhQQWp7ypdiqdGnPtWfoQIeqO3xIaSUfnZJLysILNU/edit?usp=sharing

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node {
    char * value; //must use dynamic allocation 
    struct node* next;
} node_t;

node_t * construct_3_strs() {
    //Your code here. Currently return NULL just to pass compiler, please edit as needed.

    struct node* x = NULL;
    struct node* y = NULL;
    struct node* z = NULL;

    x = malloc(sizeof(struct node));
    y = malloc(sizeof(struct node));
    z = malloc(sizeof(struct node));

    x->value = malloc(sizeof(char)*7);
    y->value = malloc(sizeof(char)*3);
    z->value = malloc(sizeof(char)*7);

    x->value = "CS604";
    y->value = "is";
    z->value = "awesome";

    x->next = y;
    y->next = z;
    z->next = x;


    return x;
}

//You can ignore the following code for testing
int dump_all(node_t*);
int main (int argc, char ** argv) {
    node_t * x = construct_3_strs();
    return dump_all(x);


}

int dump_all(node_t * x) {
    printf("x -> %s", x->value);
    node_t * y = x->next;
    printf(" %s", y->value);
    node_t * z = y->next;
    printf(" %s\n", z->value);
    if(z->next != x) {
    	printf("failed");
	return -1;
    } else {
        return 0;
    }
}
