#include <stdio.h>
#include <unistd.h>

/**
 * custom_fork_example - Custom fork example
 *main -entry of the program
 * Return: Always 0 if successful
 */
int custom_fork_example(void)

{
pid_t original_process_id;
pid_t new_process_id;

printf("Before fork\n");
new_process_id = fork();

if (new_process_id == -1)
{
perror("Fork error:");
return (1);
}

printf("After fork\n");
original_process_id = getpid();
printf("My original process id is %u\n", original_process_id);

if (new_process_id == 0)
{
printf("(%u) Child: Nooooooooo!\n", original_process_id);
}
else
{
printf("(%u) Parent: %u, I am father\n", original_process_id, new_process_id);
}

return (0);
}

int main(void)
{
custom_fork_example();
return (0);
}
