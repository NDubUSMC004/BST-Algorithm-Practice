// Author: Kaleb Turner
#include "BST.h"

/* Delete a node from the Tree */
/* Runtime = theta(h), where h is the height of the tree */
void nodeDelete(Node** root, Node* deleteNode){
	// if and elseif cover case where deleteNode only has one child
	if (deleteNode->left == NULL){
		transplant(root, deleteNode, deleteNode->right);
		updateSize(deleteNode->parent);
	}
	else if (deleteNode->right == NULL){
		transplant(root, deleteNode, deleteNode->left);
		updateSize(deleteNode->parent);
	}
	else {	// deleteNode has two children
		// replace deleteNode with its successor and replace the successor with its right child
		Node* successor = treeSuccessor(deleteNode);
		if (successor != deleteNode->right){ // if successor is not directly to the right
			transplant(root, successor, successor->right);	// swap successor and successor's right
			// preserve connection to right
			successor->right = deleteNode->right;
			successor->right->parent = successor;
		}
		transplant(root, deleteNode, successor);	// swap successor and the node to be deleted
		// preserve connection to left
		successor->left = deleteNode->left;
		successor->left->parent = successor;
		updateSize(successor);	// fix broken sizes
	}
	free(deleteNode);	// free the deleted node
	return;
}
