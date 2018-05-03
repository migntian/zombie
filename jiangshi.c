#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	pid_t pid = getpid();
	pid_t id = fork();
	if(id==0)//child
	{
		printf("child pid is :%d,father pid is :%d\n",getpid(),getppid());
	}
	else//father
	{
			printf("father pid is :%d\n",getpid());
            wait(NULL);
	}
	return 0;
}
