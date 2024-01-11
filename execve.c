#include <stdio.h>
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
char *program = "ls";
char *arg1 = "-l";
char *arg2 = "/usr/";
char *argv[] = {program, arg1, arg2, NULL};

printf("Before execve\n");
if (execve(argv[0], argv, NULL) == -1)
{
perror("Error:");
}
printf("After execve\n");
return (0);
}
