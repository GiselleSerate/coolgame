#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include "linkedlist.h"

//ptrArray is a pointer to an array of pointers to List types
List *List_create(Node *first) {
	List *which = malloc(sizeof(List));
	assert(which != NULL);
	which->first=first;
	return which;
};

int main(int argc, char *argv[]) {
	return 0;
}