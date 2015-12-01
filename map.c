#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include "linkedlist.h"
#include "map.h"

//ptrArray is a pointer to an array of pointers to List types
struct Graph *Graph_create(int *ptrArray) {
	struct Graph *map = malloc(sizeof(struct Graph));
    assert(map != NULL);

    //fix your mallocing
	// int roomCount = (sizeof(*ptrArray)/sizeof(List))
	// malloc(roomCount*sizeof(List));
	// malloc(sizeof(*ptrArray));
	map->rms=rms[i];
	struct List *rms;
};