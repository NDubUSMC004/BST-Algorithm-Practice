// Author: Kaleb Turner
#include "BST.h"

/* Perform a in-order traversal of the tree and nongraphically print each element */
/* Runtime = theta(n) */
void inOrderTreeWalk(Node* root){
	if (root != NULL){
		inOrderTreeWalk(root->left); //walk all the way left
		printf("%d ",root->key); // print the current root
		inOrderTreeWalk(root->right); //walk to the right
	}
}
