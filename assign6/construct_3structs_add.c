//For all construct_*.c questions, please follow the tutorial/instructions here:
//https://docs.google.com/document/d/1HHhQQWp7ypdiqdGnPtWfoQIeqO3xIaSUfnZJLysILNU/edit?usp=sharing

#include<stdio.h>
#include<stdlib.h>
#include <string.h>
struct snode {
  char str[101];
  int length;
  struct snode *next;
};

typedef struct snode node_t;

node_t * setup() {
    node_t * head ;
    //TODO:head declared for you
    //Allocate three more pointers

    //head for the first Node, and temporary pointers node1, node2 and node3

    
    struct snode* node1 = NULL;
    struct snode* node2 = NULL;
    struct snode* node3 = NULL;

    //Allocate three node pointees and store references to them in the three pointers
    node1 = malloc(sizeof(struct snode));
    node2 = malloc(sizeof(struct snode));
    node3 = malloc(sizeof(struct snode));

    head = node1;

    //Dereference each pointer to store the appropriate number and string into the length and str fields in its pointee.
    // Declare and init constant char[] 's
    //char* str1[6] = "hello";
    strcpy(node1->str, "hello");
    node1->length = 5;
    node1->next = node2;

    //char* str2[6] = "there";
    strcpy(node2->str, "there");
    node2->length = 5;
    node2->next = node3;

    //char* str3[5] = "prof";
    strcpy(node3->str, "prof");
    node3-> length = 4;
    node3->next = NULL;

    //Dereference each pointer to access the .next field in its pointee, 
    //and use pointer assignment to set the .next field to point to the appropriate Node. 
    
   return head;
}

void teardown(node_t* head) {
        //TODO: free all dynamic memory you requested.
        //Please complete the prototype of teardown.
        //You are not allowed to use globals

        node_t* cur = head;
        node_t* temp = head;
        while(temp != NULL){
            cur = cur->next; 
            free(temp);
            temp = cur;
        }
}


void add(node_t ** head, char * str, int length){
    //TODO: implement add to add a new node to front, pointed by head

    struct snode* node4 = NULL;
    node4 = malloc(sizeof(struct snode));
 
    strcpy(node4->str, "hi");
    node4->length = 2;
    node4->next = *head;
    *head = node4;   
}

void dump_all(node_t*);
int main (int argc, char ** argv) {
    node_t * head = setup();
    add(&head, "hi", 2);
    dump_all(head);
    teardown(head);
    return 0;
}

void dump_all(node_t * head) {
    printf("head -> ");
    node_t * cur = head;
    while(cur != NULL) {
        printf("%s ", cur->str);
	cur = cur->next;
    }
    printf("\ndone\n ");
}
