// Author: Kaleb Turner
#include "BST.h"

/* This option finds the min and max value in the tree */
void option3 (Node* root){
	Node* min = treeMin(root);
	Node* max = treeMax(root);
	if (min != NULL){ // this means max also is not NULL
		printf("The smallest node in the tree is: %d\n",min->key);
		printf("The largest node in the tree is: %d\n",max->key);
	} else {
		printf("The tree is empty!");
	}
}
