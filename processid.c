#include <stdio.h>
#include <unistd.h>
/**
*main - display process ID and parent process ID
*
*RETURN ;ALWAYS 0
*/

int main(void)
{
	pid_t process_id = getpid();
	pid_t parent_pid = getppid();

	printf("process_id: %u\n", process_id);
	printf("parent_pid: %u\n", parent_pid);

	return (0);
}
