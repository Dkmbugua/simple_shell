#include <stdio.h>
#include <stdlib.h>

int main(void)
{
char *theuserinput=NULL;
size_t addlength=0;
ssize_t read_no_ofbytes;
	
while(1)
{
printf("$");
read_no_ofbytes=getline(&theuserinput, &addlength,stdin);
		
if(read_no_ofbytes==-1)
{
printf("the program has completed\n");
free(theuserinput);
return (0);
}
		
printf("enter a text: %s", theuserinput);
}
printf("exit the program");
free(theuserinput);
return (0);
}
