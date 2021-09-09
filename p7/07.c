#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
int main()
{
	int source, destination, data_bytes_size;
	char buff[100];
	source=open("source.txt",O_RDONLY);
	data_bytes_size=read(source,buff,sizeof(buff));
	//read return data bytes in size
	
	destination=open("destination.txt",O_WRONLY|O_CREAT,0600);
	//use the pipe symbol (|) to separate O_WRONLY and O_CREAT
	// 0600 for read write access 
	
	int written_bytes=write(destination,buff,data_bytes_size);
	
	printf("copied content size --> %d \n" ,written_bytes);
	
	return 0;
}
