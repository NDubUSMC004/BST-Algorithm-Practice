// Author: Kaleb Turner
#include "BST.h"

/* This option finds the successor to a specific value in the tree */
void option4 (Node* root){
#ifdef PROMPT
	printf("Please enter the key of the node for which you want the successor. \n");
#endif
	int key;
inputError:
	scanf("%d",&key);
	// First find the node in question
	Node* target = treeSearch(root, key);
	if (target == NULL){
		printf("The target node does not exist. Please enter the key of a valid node: ");
		goto inputError;
	}
	// Then find the successor
	Node* successor = treeSuccessor(target);
	if (successor != NULL){
		printf("The successor of node %d is: %d\n", key, successor->key);
	} else {
		printf("Node %d has no successor. It is the maximum node in the tree!", key);
	}
}
