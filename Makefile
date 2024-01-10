#Author Kaleb Turner

gcc_opt = -std=c99 -pedantic -Wimplicit-function-declaration -Wreturn-type -Wformat -g

# All the .o files in this project
OBJECTS = BST.o createNode.o freeMemory.o findParent.o updateSize.o insert.o treeMin.o treeMax.o treeSuccessor.o transplant.o nodeDelete.o rightRotate.o leftRotate.o graphicalTreeWalk.o inOrderTreeWalk.o treeSearch.o printSearchResults.o option1.o option2.o option3.o

all: BST.zip BST BSTtest

#BST.zip: *.c *.h Makefile
#	zip $@ $^
	
%.o: %.c *.h
	gcc -c $< -o $@ $(gcc_opt)

# Separate targets for functions that have input prompts. Defining PROMPT allows input prompts to be displayed
createInitTree.o: createInitTree.c *.h
	gcc -c $< -o $@ $(gcc_opt) -D PROMPT
	
menu.o: menu.c *.h
	gcc -c $< -o $@ $(gcc_opt) -D PROMPT
	
option4.o: option4.c *.h
	gcc -c $< -o $@ $(gcc_opt) -D PROMPT
	
option5.o: option5.c *.h
	gcc -c $< -o $@ $(gcc_opt) -D PROMPT
	
option6.o: option6.c *.h
	gcc -c $< -o $@ $(gcc_opt) -D PROMPT
	
option7.o: option7.c *.h
	gcc -c $< -o $@ $(gcc_opt) -D PROMPT
	
option8.o: option8.c *.h
	gcc -c $< -o $@ $(gcc_opt) -D PROMPT
	
option9.o: option9.c *.h
	gcc -c $< -o $@ $(gcc_opt) -D PROMPT
	
BST: $(OBJECTS) createInitTree.o menu.o option4.o option5.o option6.o option7.o option8.o option9.o
	gcc $^ -o $@ $(gcc_opt)
	
# Separate targets for functions that have input prompts. Not defining PROMPT stops input prompts fom being displayed when redirecting input
createInitTreeTest.o: createInitTree.c *.h
	gcc -c $< -o $@ $(gcc_opt)
	
menuTest.o: menu.c *.h
	gcc -c $< -o $@ $(gcc_opt)
	
option4Test.o: option4.c *.h
	gcc -c $< -o $@ $(gcc_opt)
	
option5Test.o: option5.c *.h
	gcc -c $< -o $@ $(gcc_opt)
	
option6Test.o: option6.c *.h
	gcc -c $< -o $@ $(gcc_opt)

option7Test.o: option7.c *.h
	gcc -c $< -o $@ $(gcc_opt)
	
option8Test.o: option8.c *.h
	gcc -c $< -o $@ $(gcc_opt)
	
option9Test.o: option9.c *.h
	gcc -c $< -o $@ $(gcc_opt)
	
BSTtest: $(OBJECTS) createInitTreeTest.o menuTest.o option4Test.o option5Test.o option6Test.o option7Test.o option8Test.o option9Test.o
	gcc $^ -o $@ $(gcc_opt)
	
clean:
	rm -rf *.o BST BST.zip
