#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include "linkedlist.h"
#include "map.h"


int main(int argc, char *argv[]) {
	//List = {};
	// int onex = 1;
	// int twox = 2;
	// int *one = &onex;
	// int *two = &twox;
	//MALLOC THE FOLLOWING ARRAY so that you can access it . . . later? except you're inside the main function all the time anyway
	//contains pointers to structs called RoomsssS? Firsts??? anyway it's the first thing in the linkedlist
	List* listArray[] = {};
	//Here is where we can add a bunch of lists to listArray; call list_create or whatever your function is
	//this line still thinks it's printing ints but is actually printing lists
	printf("listArray is %d\n", *listArray[0]);
	//struct Graph *myMap = Graph_create(myPointer);
	return 0;
}