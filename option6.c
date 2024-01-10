// Author: Kaleb Turner
#include "BST.h"

/* This option performs a left rotation around a node */
void option6 (Node** root){
#ifdef PROMPT
	printf("Please enter the node for which you wish to rotate: ");
#endif
	int key;
inputError:
	// get the target node
	scanf("%d",&key);
	Node* target = treeSearch(*root, key);
	if (target == NULL){
		printf("Node %d does not exist in the tree. Please enter a valid node: ", key);
		goto inputError;
	}
	// rotate the node
	leftRotate(root, target);
	printf("The tree after left rotating node %d is: \n\n", key);
	graphicalTreeWalk(*root,0);
	printf("\n\n");	
}
