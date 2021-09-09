#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<errno.h>
int main()
{
	int n,fd;
	char buff[50];
	// 0200 read only
	// if O_CREAT falg is used it will create the new file if not present already 
	// whereas O_RDONLY just try to open file in reading mode if not presents return fd= -1 
	fd=open("test.txt", O_RDONLY, 0200);
	printf("file descripter %d\n", fd);
	

	//fd = any positive number sucess 
	//fd = -1 error
	
	if(fd==-1){
		printf("error no. %d \n", errno); 
		perror("error ");
		int newfd=creat("testnew.txt", S_IRWXU);
		printf("new generated file descripter %d\n", newfd);
	}
	else{

		printf("file already present success \n");
	}
	
	
	
	return 0; // 0 for sucesss 

}
