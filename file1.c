#include <stdio.h>

int main()
{

	FILE *fp;
	
	fp = fopen("test.txt", "r");

	printf("%c\n", fgetc(fp));

	fclose(fp);

	return 0;
}
