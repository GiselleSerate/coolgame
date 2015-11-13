#ifndef _linkedlist_h
#define _linkedlist_h

struct NodeStruct;
typedef struct NodeStruct {
	struct NodeStruct *next;
	char *arc_label;
	//Are we referring the rooms as structs themselves or are we referring to them as character strings? 
	char rm;
} Node;

struct ListStruct;
typedef struct ListStruct{
	Node *first;
} List;

#endif