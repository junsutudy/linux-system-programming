#include<stdio.h>

int main() {

	FILE* file;
	
	file = fopen("temp0.txt", "w+");

	if (file == NULL) puts("cannot create file \'temp0.txt\'");
	else puts("created file \'temp0.txt\'");

	fputs("Hello World!", file);
	
	fclose(file);
}
