#ifndef _map_h
#define _map_h

typedef struct {
	int roomCount;
	//But I want an array of these pointers; I could just malloc extra space? That seems unintelligent.
	struct List *rms;
} Graph;

#endif