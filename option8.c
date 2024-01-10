// Author: Kaleb Turner
#include "BST.h"

/* This option deletes an existing node from the tree */
void option8 (Node** root){
#ifdef PROMPT
	printf("Please enter the node you wish to delete: ");
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
	// delete the node
	nodeDelete(root, target);
	printf("The tree after deleting node %d is: \n\n", key);
	graphicalTreeWalk(*root,0);
	printf("\n\n");
}
