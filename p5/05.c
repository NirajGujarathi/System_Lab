#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<stdio.h>
int main(){
	int n=1;
	while(1){
		if(n<6)
		{
			char filename[]="testn.txt";
			filename[4]=n+'0';
			int fd=open(filename, O_CREAT, 00600);
			//printf("\ntest file %d created \tand file descriptor is --> %d",n,fd);
			n=n+1;
		}
		else
			continue;
			
	
	}
}
