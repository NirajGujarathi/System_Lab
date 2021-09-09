#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<errno.h>
int main(){
	int hrdlnk= link("test.txt", "/home/niraj/Desktop/087lab/p1/hardlink.txt");
	printf("On success, zero is returned.  On error, -1 is returned \n\n");
	// -1 error occurs  --> If newpath exists, it will not be overwritten 
	
	if(hrdlnk <0)
	{
		printf("hardlink failed %d \n", hrdlnk); 
		perror("error");
	}
	else
	{
		printf("status -> %d \n" ,hrdlnk);
		printf("hardlink created  --> inode number same as source file \n"); 
	}	
	return 0;
}

