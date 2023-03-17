#include<stdlib.h>
#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include<unistd.h>
#define FILE_SIZE 1024

int main() {

	char* fileName = "temp0.txt";

	int file = open(fileName, O_RDWR | O_CREAT, 0644);

	char text[FILE_SIZE] = {};

	read(file, text, FILE_SIZE);

	printf("%s", text);
} 
