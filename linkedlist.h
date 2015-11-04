#ifndef _linkedlist_h
#define _linkedlist_h

typedef struct {
	struct Node *next;
	char *arc_label;
	//Are we referring the rooms as structs themselves or are we referring to them as character strings? 
	char rm;
} Node;

typedef struct {
	struct Node *first;
} List;

#endif