// Author: Kaleb Turner
#include "BST.h"

/* This option inserts a new node into the tree */
void option9 (Node** root){
#ifdef PROMPT
	printf("Please enter the key for the node you wish to insert: ");
#endif
	int key;
inputError:
	// get the target node
	scanf("%d",&key);
	// create the node, and then insert it into the tree
	insert(root, createNode(key));
	printf("The tree after inserting node %d is: \n\n", key);
	graphicalTreeWalk(*root,0);
	printf("\n\n");
}
