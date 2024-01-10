/* The purpose of this project is to implement a Binary Search Tree data structure to practice for the upcoming Foundations 2 midterm */

// Author: Kaleb Turner
#include "BST.h"

int main() {
	// It all begins at the root!!
	Node* root = NULL;
	// create an initial tree from the user provided keys
	createInitTree(&root);
	
	// Create an options menu for the user
	menu(&root);

	/* Free all dynamically allocated memory */
	printf("Thank you for playing! Freeing memory and exiting the program... BYEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE!\n");
	freeMemory(root);
	return 0;
}
