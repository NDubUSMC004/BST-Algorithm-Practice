// Author: Kaleb Turner
#include "BST.h"

/* Get the minimum value from the tree */
/* Runtime = theta(h), where h is the height of the tree */
Node* treeMin(Node* root){
	Node* current = root;
	while(current->left != NULL){
		current = current->left;
	}
	return current;
}
