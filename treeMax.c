// Author: Kaleb Turner
#include "BST.h"

/* Get the maximum value from the tree */
/* Runtime = theta(h), where h is the height of the tree */
Node* treeMax(Node* root){
	Node* current = root;
	while(current->right != NULL){
		current = current->right;
	}
	return current;
}
