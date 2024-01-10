// Author: Kaleb Turner
#include "BST.h"

/* Perform a traversal of the tree and graphically print each element */
/* Runtime = theta(n) */
/* Note this code was adapted from a snippit of code found on the internet and was included as a bonus feature. THIS FUNCTION IS NOT MY INTELLECTUAL PROPERTY!! */
void graphicalTreeWalk(Node* root, int space){
	if (root == NULL){
		return;
	}
	space += 5;
	graphicalTreeWalk(root->right, space); // walk right subtree
	for (int i = 5; i < space; i++){
		printf(" ");
	}
	printf("%d",root->key); // print the current root
	printf("\n");
	graphicalTreeWalk(root->left, space); //walk left subtree
}
