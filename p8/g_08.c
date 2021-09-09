#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


ssize_t read(int fd, void *buf, size_t count);

void main(){
int fd;
char c;
int i=0;
if((fd=open("sample1.txt",0,0)) != -1){
	while(read(fd,&c,1)==1){
		if(c=='\n'){
		printf("\n");
		continue;
		}
		printf("%c",c);
	}
}
close(fd);
}
