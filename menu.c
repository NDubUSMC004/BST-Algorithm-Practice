// Author: Kaleb Turner
#include "BST.h"

void menu (Node** root){
	int selection = 0;
	// Create a function pointer for the menu options the require Node* root
	void (*funcPtr1[5])(Node* root) = {option1, option2, option3, option4, option5};
	// Create a function pointer for the menu options the require Node** root
	void (*funcPtr2[4])(Node** root) = {option6, option7, option8, option9};
	
	while (selection != 10){
#ifdef PROMPT
		printf("\n\nPlease select an option from the following menu by entering the number next to "
			"the desired option, followed by the enter key:\n"
				"\t 1:  List the nodes of the tree in order from smallest to largest\n"
				"\t 2:  Display the tree in a graphical format\n"
				"\t 3:  Find the min and max value in the tree\n"
				"\t 4:  Find the successor to a specific value in the tree\n"
				"\t 5:  Search the tree for a specific node\n"
				"\t 6:  Perform a left rotation around a node\n"
				"\t 7:  Perform a right rotation around a node\n"
				"\t 8:  Delete an existing node from the tree\n"
				"\t 9:  Insert a new node into the tree\n"
				"\t10:  Exit the program\n"
				"\nOption: "
			);
#endif
		scanf("%d",&selection);
		// Option 1-5
		if (selection > 0 && selection <= 5){
			funcPtr1[selection-1](*root);
		}
		// Option 6-9
		else if (selection >= 6 && selection <= 9){
			funcPtr2[selection-6](root);
		}
		// Option 10: Exit Program
		else if (selection == 10){
			return;
		}
		else {	// invalid entry
			printf("Invalid entry! Please try again...\n");
		}
	}
}
