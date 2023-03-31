#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#define BUF_SIZE 256

void printcwd() {

	char buffer[BUF_SIZE];

	if (getcwd(buffer, BUF_SIZE) == NULL)
		exit(1);

	printf("%s\n", buffer);
}

int main() {
	printcwd();
	chdir("/Users/junsu");
	printcwd();
	chdir("..");
	printcwd();
}
