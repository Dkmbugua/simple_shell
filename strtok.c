#include <stdio.h>
#include <string.h>
/**
* tokeniz in : based on deimeter
*initialize variable : char *start=str
*use while loop to iterate the tokens
*main function: define a string and deliiter
return (0) from main function
*/

void print_tokens(char *str, char *delim)
{
char *token=strtok(str, delim);
char *start=str;

while (token != NULL)
{
printf("%s\n", token);
start += strlen(token) + strlen(delim);
token = strtok(NULL, delim);
}

if (*start != '\0')
{
printf("%s\n", start);
}
}

int main()
{
char string[] = "push till you do it";
char delimiter[] = " ";

print_tokens(string, delimiter);

return (0);
}
