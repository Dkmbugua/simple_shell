#include <stdio.h>
#include <unistd.h>
/**
*main - PID AND PPID
*
*RETURN ;ALWAYS 0
*/

int main () {
pid_t process_id = getpid();
pid_t parent_pid = getppid();
	
printf("process_id: %u\n", process_id);
printf("parent_pid: %u\n", parent_pid);
	
return 0;
}
