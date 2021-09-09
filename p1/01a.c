#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<errno.h>
int main(){
	int softlink= symlink("test.txt", "/home/niraj/Desktop/087lab/p1/softlink.txt");
	printf("On success, zero is returned.  On error, -1 is returned \n\n");
	// -1 error occurs  --> If newpath exists, it will not be overwritten 
	
	if(softlink <0)
	{
		printf("softlink failed %d \n", softlink); 
		perror("error");
	}
	else
	{
		printf("status -> %d \n" ,softlink);
		printf("softlink created  --> differnt inode number , size is same as softlink filename \n"); 
	}	
	return 0;
}

