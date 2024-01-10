// Author: Kaleb Turner
#include "BST.h"

/* Find the future parent of a given key */
/* Runtime = theta(h), where h is the height of the tree */
Node* findParent(Node* root, Node* child){
	Node* parent = NULL;
	Node* current = root; // start at the root
	while (current != NULL){
		parent = current;
		if (child->key < current->key){
			// look left
			current = current->left;
		} else {
			// look right
			current = current->right;
		}
	}
	// future parent found
	return parent;
}
