#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

void main(){
int fd;

fd = open("/home/gaurav/Downloads/SS-Lab1/Q9/sample.txt",0,0);
struct stat file_stat;
int ret;

ret = fstat(fd,&file_stat);
int inode = file_stat.st_ino;
int hrdlink = file_stat.st_nlink;
int uid = file_stat.st_uid;
int gid = file_stat.st_gid;
int size = file_stat.st_size;
int blksize = file_stat.st_blksize;
int cntnlks = file_stat.st_blocks;
int tOLaccess = file_stat.st_atime;
int modi = file_stat.st_mtime;
int stat_chng = file_stat.st_ctime;

printf("Inode : %d\n",inode);
printf("No of hrdlinks : %d\n",hrdlink);
printf("uid : %d\n",uid);
printf("gid : %d\n",gid);
printf("size : %d\n",size);
printf("Block Size : %d\n",blksize);
printf("No. of blocks : %d\n",cntnlks);
printf("Time of last access : %d\n",tOLaccess);
printf("Time of last modification : %d\n",modi);
printf("Time of last change : %d\n",stat_chng);
}
