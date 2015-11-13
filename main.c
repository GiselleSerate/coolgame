#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
	//List = {};
	int onex = 1;
	int twox = 2;
	int *one = &onex;
	int *two = &twox;
	//following line is iffy
	int* listArray[] = {one,two};
	// int *myPointer = listArray;
	printf("listArray is %d", **listArray);
	printf("listArray is %d", *listArray[1]);

	// printf("listArray is %d", *listArray[0]);
	//struct Graph *myMap = Graph_create(myPointer);
	return 0;
}