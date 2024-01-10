// Author: Kaleb Turner
#include "BST.h"

/* Allocate memory to a new node */
/* Runtime = theta(1) (assuming malloc is a constant time function)*/
Node* createNode(int key) {
	// Allocate Memory
	Node* newNode = (Node*)malloc(sizeof(Node));
	// Populate information
	newNode->key = key;
	newNode->parent = NULL;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->size = 1;
	return newNode;
}
