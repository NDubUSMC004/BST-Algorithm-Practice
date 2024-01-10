// Author: Kaleb Turner
#include "BST.h"

/* Find the successor of a given node. The successor is defined as the next node in the In-Order sequence */
/* Runtime = theta(h), where h is the height of the tree */
Node* treeSuccessor(Node* x){
	if(x->right != NULL){
		// Successor is in the right subtree of x
		return treeMin(x->right);
	}
	Node* successor = x->parent;
	while (successor != NULL && x==successor->right){
		// Walk up the tree until we find the successor
		x = successor;
		successor = successor->parent;
	}
	return successor;
}
