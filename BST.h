// Author: Kaleb Turner

#include <stdio.h>
#include <stdlib.h>

/* Create the node structure in the BST */
typedef struct Node {
	int key;
	struct Node* parent;
	struct Node* left;
	struct Node* right;
	int size;
} Node;

/* Prototypes in this project */

Node* createNode(int key);
void insert(Node** root, Node* newNode);
void nodeDelete(Node** root, Node* deleteNode);
void freeMemory(Node* root);
void updateSize(Node* current);
void transplant(Node** root, Node* x, Node* y);
Node* treeMin(Node* root);
Node* treeMax(Node* root);
Node* treeSuccessor(Node* x);
Node* findParent(Node* root, Node* child);
Node* treeSearch(Node* root, int key);
void rightRotate(Node** root, Node* target);
void leftRotate(Node** root, Node* target);
void graphicalTreeWalk(Node* root, int space);
void inOrderTreeWalk(Node* root);
void printSearchResults(Node* searchResult);
void createInitTree(Node** root);
void menu (Node** root);
void option1 (Node* root);
void option2 (Node* root);
void option3 (Node* root);
void option4 (Node* root);
void option5 (Node* root);
void option6 (Node** root);
void option7 (Node** root);
void option8 (Node** root);
void option9 (Node** root);
