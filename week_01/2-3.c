#include "ch2.h"
int main()
{
	int ret;
	char buf[101]=0;
	int fd;
	fd=open("./test.data",0_CREAT|0_TRUNC|0_RDWR,0644);
	printf("New file description %d\n",fd);
	printf("%d:2-2 is running!\n",getpid());
	ret=write(1,"Hello World!\n",13);
	printf("ret=%\n",ret);

	sleep(10);
	printf("Please input data <=100:\n");
	fgets(buf,100,stdin);
	ret=write(fd,buf,sizeof(buf));
	printf("ret=%d\n",ret);
	exit(0);
	
}
