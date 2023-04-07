#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void final(void);

FILE* fp;

int main() {

	fp = fopen("something.txt", "r");

	char buffer[1024] = {};

	atexit(final);

	fread(buffer, 1, 1024, fp);
	printf("%s", buffer);
}

void final(void) {
printf("fp closed\n");
fclose(fp);
}
