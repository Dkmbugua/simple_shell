#include <stdio.h>
/**
 * main: command line are accessed
 * iterating through argument using while loop
 *
*/

int main(int argcount , char **argvector)
{
	for (int i=0; argvector[i] !=NULL; i++ )

{
	printf("this argument is %d : %s\n,"argvector[i]);
}
return(0);
}
