#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <linkedlist.h>

struct Graph *Graph_create(int roomCount, List array) {
	//I malloc this how? The number of rooms isn't a constant that I can just define
	int roomCount; 
	malloc(roomCount*sizeof(List));
	struct List *rms;
};