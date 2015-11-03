struct Node {
	struct Node *next;
	char *arc_label;
	//Are we referring the rooms as structs themselves or are we referring to them as character strings. 
	char rm;
};

struct List {
	struct Node *first;
};