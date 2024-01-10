// Author: Kaleb Turner
#include "BST.h"

/* This option lists the nodes of the tree in order from smallest to largest */
void option1 (Node* root){
	printf("The nodes from smallest to largest are: ");
	inOrderTreeWalk(root);
	printf("\n");
}
