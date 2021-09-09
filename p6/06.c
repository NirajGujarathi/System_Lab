#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include <stdio.h>
#include<string.h>
int main()
{
	char buffer[100];
	printf("stdin--> stdout \n");
	//stdin 0
	read(0,buffer,sizeof(buffer));
	//read bytes from standard input device(keyboard), store in buffer


	//stdout 1
	write(1, buffer,strlen(buffer));
	//print all bytes only from screen
}
