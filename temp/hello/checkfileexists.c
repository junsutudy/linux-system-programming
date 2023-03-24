#include <unistd.h>
#include <stdio.h>

int main() {

	char *path = "./b.txt";

	if (access(path, R_OK | W_OK) == 0) {
		printf("can read\n");
	} else {
		printf("cannot read\n");
	}
}
	
