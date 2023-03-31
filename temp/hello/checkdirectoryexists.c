#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void checkDirectoryExists(char* dirname) {
	DIR* dirp;
	struct dirent* dentry; 

	if ((dirp = opendir(dirname)) == NULL) {
		printf("%s does not exists", dirname);
		exit(1);
	}			else {
		printf("%s exists", dirname);
	}
	
	closedir(dirp);
}

int main(int argc, char** argv) {

	checkDirectoryExists(argv[1]);
}
