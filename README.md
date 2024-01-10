# BST-Algorithm-Practice
## Author: Kaleb Turner
### Purpose  
I created this project to help me memorize and practice using various Binary Search Tree algorithms for an algorithms and data structures course. For this class, we were given pseudocode for various BST algorithms. We had to be able to memorize the algorithms and implement them by hand. While studying these algorithms, I realized I did not have a way to check my manual use of the algorithms, so I created this project to help with the validation.  
### Executables
The Makefile will create two executables. These executables function the same, except that the *BST* executable will prompt you for various inputs, while *BSTtest* has the prompts hidden. For this reason, you should only use *BSTtest* if you redirect stdin to a preformatted input file.
### Project Use
The project comes with a file called *testDriver*. This is the preformatted input file that can be used with *BSTtest* if you wish to test this way. To do this, enter *BSTtest <testDriver* into the command line. This test driver is designed to test each function of the program. More information about the *testDriver* can be found below.

If you wish to test the program manually, you may do so by typing *BST* into the command line. Be sure to carefully read each prompt to ensure you are giving the correct input. In some cases, I have programmed guards to protect against incorrect input, but I have not done this throughout the program, as this was intended as a personal use project. **PROPER INPUT IS THE RESPONSIBILITY OF THE USER!** 

### testDriver Explained
If you are using the *testDriver* with the *BSTtest* executable, you will only see the results of each operation (as the prompts have been disabled). You can follow along with this section to verify visually that the program is working as expected.
The *testDriver* performs the following actions, in this order:  

	- insert 11 nodes into the tree in the order 32, 18, 35, 6, 25, 8, 22, 27, 19, 24, 28
		- no output
		
	- list the nodes in increasing order
		- expected output: 6 8 18 19 22 24 25 27 28 32 35
		
	- prints the tree in a graphical format. Note the tree is printed sideways, with the root on the far left (column 1), its children in column 2, etc.
		- expected output: The tree should resemble the one given in HW 21, problem 3
		
	- Print the smallest and largest nodes in the tree
		- expected output: smallest = 6, largest = 35
		
	- Print the successor to the node 18
		- expected output: 19
		
	- Print the successor to the node 28
		- expected output: 32
		
	- Print the information for node 18
		- expected output: L=6, R=25, P=32, S=9
		
	- Print the information for node 32
		- expected output: L=18, R=35, P=NULL, S=11
		
	- Print the information for node 36
		- expected output: Node36 was not found in the tree
		
	- Left Rotate around node 18
		- expected output: You will have to do the rotation yourself to verify it is correct (or trust me)
		
	- Print the changed data for node 18
		- expected output: L=6, R=22, P=25, S=6
		
	- Right Rotate around node 32
		- expected output: You will have to do the rotation yourself to verify it is correct (or trust me)
		
	- Print the changed data for node 32
		- expected output: L=27, R=35, P=25, S=4
		
	- Delete node 25
		- expected output: Node 25 deleted, tree fixed 
		
	- insert a node with key 30
		- expected output: The new tree with node 30 inserted correctly
		
	- Print the data for node 30
		- expected output: L=NULL, R=NULL, P=28, S=1
		
	- EXIT
	
	
I hope you enjoy my project!
