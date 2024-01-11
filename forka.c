#include  <stdio.h>
#include <unistd.h>

/**
 * custom_fork_example- demonstrate the fork system call
 * return 0 on success and 1 on failure
*/

int custom_fork_example(void)
{
pid_t my_process_id;
pid_t child_process_id;

printf("before forking\n");
child_process_id = fork();

if (child_process_id == -1)
{
perror("fork error:");
return (1);
}
printf("after forking\n");
my_process_id = getpid();
printf("my process id is %u\n", my_process_id);
return (0);
}

int main(void)
{
custom_fork_example();
return (0);
}
