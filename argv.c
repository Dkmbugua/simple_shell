#include <stdio.h>
/**
 * main: command line are accessed
 * iterating through argument using while loop
 *argcount number of arguments passed to the program
 *argvector array of strings containg arguments
 *return 0 if successful, 1 otherwise
*/

int main(int argcount, char **argvector)
{
	for (int i = 0; argvector[i] != NULL; i++)

{
	printf("this argument is %d : %s\n,"argvector[i]);
}
return (0);
}
