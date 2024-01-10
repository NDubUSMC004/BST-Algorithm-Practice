// Author: Kaleb Turner
#include "BST.h"

/* Rotate the tree to the left around a given node */
/* Runtime = theta(1) */
void leftRotate(Node** root, Node* target){
	// target is the node that will "go down"
	Node* y = target->right;	// y is the node that will "go up"
	Node* b = y->left;	// b is the potential node between target and y which will need to be fixed
	transplant(root, target, y); // do the swap
	target->right = b; // fix b
	if (b != NULL){
		b->parent = target;
	}
	// fix swapped nodes relationship with each other
	y->left = target;
	target->parent = y;
	// fix sizes
	updateSize(target);
	return;
}
