// Author: Kaleb Turner
#include "BST.h"

/* Insert a node into the BST */
/* Runtime = theta(h), where h is the height of the tree */
void insert(Node** root, Node* newNode){
	Node* parent = findParent(*root, newNode);
	newNode->parent = parent;
	if (parent == NULL){
		// The inserted node is the root
		*root = newNode;
	}
	else if (newNode->key < parent->key){
		// The inserted node is the left child
		parent->left = newNode;
	} else {
		// The inserted node is the right child
		parent->right = newNode;
	}
	updateSize(newNode);
	return;
}
