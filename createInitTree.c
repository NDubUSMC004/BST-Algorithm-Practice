// Author: Kaleb Turner
#include "BST.h"

void createInitTree(Node** root) {
	int nodeCount;
inputError:
#ifdef PROMPT
	printf("How many nodes do you plan on entering? ");
#endif
	scanf("%d",&nodeCount);
	if (nodeCount <= 0){
		printf("You must enter a number greater than 0!\n");
		goto inputError;
	}
#ifdef PROMPT
	printf("Please enter the key for each of the %d nodes in the order you wish to insert them, seperating each key with a space.\n", nodeCount	
	);
#endif
	int key;
	for (int i = 0; i < nodeCount; i++){
		// Get the user provided key
		scanf("%d", &key);
		// Create the node with the key and insert it into node
		insert(root, createNode(key));
	}
}
