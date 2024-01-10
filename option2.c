// Author: Kaleb Turner
#include "BST.h"

/* This option displays the tree in a graphical format */
void option2 (Node* root){
	printf("The graphical representation of the tree is: \n\n\n");
	graphicalTreeWalk(root,0);
	printf("\n\n");
} 
