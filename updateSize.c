// Author: Kaleb Turner
#include "BST.h"

/* Update the sizes of the elements in the BST */
/* Runtime = theta(h), where h is the height of the tree */
void updateSize(Node* current){
	while (current != NULL){
		current->size = 1;
		if (current->left != NULL){
			current->size += current->left->size;
		}
		if (current->right != NULL){
			current->size += current->right->size;
		}
		current = current->parent;
	}
}
