#include <stdio.h>
#include <unistd.h>
#define NUM 10

int main() {
	pid_t pid;

	pid = fork();

	if (pid == 0) {
		printf("parent");
	} else {
		printf("child");
	}
}
