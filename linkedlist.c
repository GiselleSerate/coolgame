#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include "linkedlist.h"

Node *Node_create(Node *next, char *arcLabel, char rm) {
	Node *which = malloc(sizeof(Node));
	assert(which != NULL);
	which->next=next;
	which->arcLabel=arcLabel;
	which->rm=rm;
	return which;
};

List *List_create(Node *first) {
	List *which = malloc(sizeof(List));
	assert(which != NULL);
	which->first=first;
	return which;
};

List *List_destroy(List *which) {
	//What do I free? all that's in here is a pointer, do I just recursively search through and delete nodes as I go? I don't think I malloc anything at any point in list or node
	free(which);
}

//just so it doesn't yell at me while I'm trying to compile linkedlist.c
int main(int argc, char *argv[]) {
	return 0;
}