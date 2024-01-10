// Author: Kaleb Turner
#include "BST.h"

/* Search a given tree for a given key */
/* Runtime = theta(h), where h is the height of the tree */
Node* treeSearch(Node* root, int key){
	Node* current = root;
	while (current != NULL && key != current->key){
		//keep searching
		if (key <= current->key){
			//search left
			current = current->left;
		} else {
			//search right
			current = current->right;
		}
	}
	if (current == NULL){
		printf("Node %d was not found in the tree!\n", key);
	}
	return current;
}
