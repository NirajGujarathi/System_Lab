#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<errno.h>
int main()
{
	int fd;
	// O_EXCL - flag --> prevents creation of file if already exists 
	// 0600 read and write mode 
	fd=open("test.txt",  O_EXCL, 0600);
	printf("file descripter %d\n", fd);
	

	//fd = any positive number sucess 
	//fd = -1 error
	
	if(fd==-1){
		printf("file not present also O_EXCL restricts to create new file file.. error no. %d \n", errno); 
		perror("error ");
	}
	else{

		printf("file already present success! opend in 0600 mode (Read/ write) \n");
		
	}
	
	
	
	return 0; 

}
