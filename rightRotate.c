// Author: Kaleb Turner
#include "BST.h"

/* Rotate the tree to the right around a given node */
/* Runtime = theta(1) */
void rightRotate(Node** root, Node* target){
	// target is the node that will "go down"
	Node* y = target->left;	// y is the node that will "go up"
	Node* b = y->right;	// b is the potential node between target and y which will need to be fixed
	transplant(root, target, y); // do the swap
	target->left = b; // fix b
	if (b != NULL){
		b->parent = target;
	}
	// fix swapped nodes relationship with each other
	y->right = target;
	target->parent = y;
	// fix sizes
	updateSize(target);
	return;
}
