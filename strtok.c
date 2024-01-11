#include <stdio.h>
#include <string.h>
/**
 * print_tokens- tokenize a string based on delimeter
 * @str: the input string
 * @delim: the delimeter used fpr tokemization
*/

void print_tokens(char *str, char *delim)
{
char *token = strtok(str, delim);
char *start = str;

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
/**
 *main - entry of a program
 *return: always 0
*/
int main(void)
{
char string[] = "push till you do it";
char delimiter[] = " ";

print_tokens(string, delimiter);

return (0);
}
