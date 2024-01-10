// Author: Kaleb Turner
#include "BST.h"

/* Free all dynamically allocated memory from the tree */
void freeMemory(Node* root){
	if (root != NULL){
		// free memory allocated to the left subtree
		freeMemory(root->left);
		// free memory allocated to the right subtree
		freeMemory(root->right);
		free(root);
	}
}
