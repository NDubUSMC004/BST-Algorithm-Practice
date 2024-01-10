// Author: Kaleb Turner
#include "BST.h"

/* This option searches the tree for a specific node */
void option5 (Node* root){
#ifdef PROMPT
	printf("Please enter the target key. Note the target need not necessarily exist in the tree: ");
#endif
	int key;
	scanf("%d",&key);	
	printSearchResults(treeSearch(root, key));
}
