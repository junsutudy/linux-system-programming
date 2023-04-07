#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {


	int num;
	scanf("%d", &num);
	
	pid_t pid;
	pid = fork();

	if (pid > num) { // 부모

		int count = 0;
		
		for (int i = 1; i <= num; i++)
			count += i;
		
		printf("parent process, %d\n", count);

	} else {
	
		int count = 1;

		for (int i = 1; i <= num; i++) {
			count *= i;
			printf("%d %d\n", i, count);
		}
		printf("child process, %d\n", count);

	}
}
