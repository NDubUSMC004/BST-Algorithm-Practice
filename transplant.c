// Author: Kaleb Turner
#include "BST.h"

/* Transplant two nodes in the BST */
/* Runtime = theta(1) */
void transplant(Node** root, Node* x, Node* y){
	Node* parent = x->parent;
	if (parent == NULL){
		// x was the root of the tree
		*root = y;
	}
	else if (x == parent->left){
		// x was a left child
		parent->left = y;
	}
	else {
		// x was a right child
		parent->right = y;
	}
	if (y != NULL){
		// now that y is a child of a new node, update its parent
		y->parent = parent;
	}	
	return;
}
