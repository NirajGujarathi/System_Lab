#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int input_file, data;
	char *stream = (char *) calloc(100, sizeof(char));
	input_file=open("input.txt",O_RDONLY,0200);
	printf("first open() returns 3 because when main process created, then fd 0, 1, 2 are already taken by stdin, stdout and stderr. \n-1 is for error in file open() \n\n");
	
	
	if(input_file < 0 ){
		printf("file not present status -> %d /n" , input_file);
		perror("error");
		exit(1);
	}
	
	
	data=read(input_file,stream,100);

	printf("%s \n", stream);
	
	close(input_file);
		
}
