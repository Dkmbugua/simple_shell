#include <stdio.h>
#include <unistd.h>

int main() {
pid_t pid = getpid();
pid_t ppid = getppid();
printf("Current process PID: %d\n", pid);
printf("Parent process PID: %d\n", ppid);
return 0;
}
