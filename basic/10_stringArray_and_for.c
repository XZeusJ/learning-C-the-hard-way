#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	//go through each string in argv
	//argv[0] is something like ./filename
	for(i = 1; i< argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}
	

	argv[1] = "kkkk";
	printf("new arg1 is: %s\n",argv[1]);
	// make own array of strings
	char *states[] = {
		"California", "Oregon",
		"Washington", "Texas"
	};
	int num_states = 4; //when num_states is 5, print '\0'; when bigger than 5, can't go on
	for(i = 0; i < num_states; i++) {
		printf("state %d: %s\n", i, states[i]);
	}

	return 0;
}
