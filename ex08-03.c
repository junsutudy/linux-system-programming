#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
	pid_t pid1, pid2;
	int status;

	pid1 = pid2 = -1;

	pid1 = fork();

	if (pid1 > 0) pid2 = fork();

	if (pid1 > 0 && pid2 > 0) {
		waitpid(pid2, &status, 0);
		printf("parent: child2 - exit(%d)\n", status);
		waitpid(pid1, &status, 0);
		printf("parent: child1 - exit(%d)\n", status);
	} else if (pid1 == 0 && pid2 == 0) {
		sleep(2);
		exit(2);
	} else {
		printf("failed to fork\n");
	}
}
