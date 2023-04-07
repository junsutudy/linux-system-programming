#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int i = 0;

int main() {

	pid_t pid;

	i++;

	printf("before calling fork (%d)\n", i);
	
	pid = fork();

	if (pid == 0)
		printf("child process (%d)\n", ++i);
	else if (pid > 0)
		printf("parent process (%d)\n", --i);
	else
		printf("fail to fork\n");
}
