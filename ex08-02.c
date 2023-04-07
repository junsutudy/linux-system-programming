#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
	pid_t pid;
	int status;

	pid = fork();

	if (pid > 0) {
		printf("parent waiting..\n");
		wait(&status);
		printf("parent status : %d\n", status);
	} else if (pid == 0) {
		sleep(1);
		printf("child ended");
		exit(1234);
	} else {
		printf("unknown error");
	}

	printf("parent ended");
}
