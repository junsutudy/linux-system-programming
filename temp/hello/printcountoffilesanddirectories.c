#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void checkDirectoryExists(char* dirname) {
	DIR* dirp;
	struct dirent* dentry; 

	int dirCnt = 0;
	int fileCnt = 0;

	if ((dirp = opendir(dirname)) == NULL)
		exit(1);

	while (dentry = readdir(dirp)) {
		if (dentry->d_ino != 0) {
			if (opendir(dentry->d_name) != NULL)
				dirCnt++;
			else fileCnt++;
		}

	}
	
	printf("%d files, %d directories", fileCnt, dirCnt);

	closedir(dirp);
}

int main(int argc, char** argv) {

	checkDirectoryExists(argv[1]);
}
