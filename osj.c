#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {


	int num;
	scanf("%d", &num);
	
	pid_t pid;
	pid = fork();

	int count = 1;

	if (pid > num) { // 부모

		for (int i = 1; i <= num; i++)
			count += i;
		
		printf("parent process, %d\n", count);

	} else {

		for (int i = 1; i <= num; i++)
			count *= i;
		printf("child process, %d\n", count);

	}
}
