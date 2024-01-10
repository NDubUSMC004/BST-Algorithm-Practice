// Author: Kaleb Turner
#include "BST.h"

/* Print the results of treeSearch */
void printSearchResults(Node* searchResult){
	if (searchResult != NULL) {
		printf("Here is the data stored at Node %d: ", searchResult->key);
		if (searchResult->left != NULL) {
			printf("Left = %d, ", searchResult->left->key);
		} else {
			printf("Left = NULL, ");
		}
		if (searchResult->right != NULL) {
			printf("Right = %d, ", searchResult->right->key);
		} else {
			printf("Right = NULL, ");
		}
		if (searchResult->parent != NULL) {
			printf("Parent = %d, ", searchResult->parent->key);
		} else {
			printf("Parent = NULL, ");
		}
		printf("Size = %d\n", searchResult->size);
	}
}
