#include<stdio.h> 
#include<stdlib.h> 
#include<sys/wait.h> 
#include<unistd.h>

char *const ps_argv[] = {"ps","-eaf",0};

//char *const ps_argv[] = {"ls","-l",0};

int mysystem(const char *ptr);

int main()
{
    printf("Running ps with system\n");
    //system("ls");
    //mysystem("ls");
     //mysystem("ps -eaf");
   mysystem("bc");
   	
    printf("Done.\n");
    exit(0);
}
int mysystem(const char *ptr){
	pid_t pid;
	int ret,status;
	pid = fork();
	if (pid == 0)  // children process
	{
 		if ((execl("/bin/sh","sh","-c",ptr, (char*)0)) < 0)
         //   if ( (execve("/bin/ps",ps_argv,NULL)) < 0)
                {
		 perror("execl fails:");
		 exit(0);
                }
        }
	else // parent process
	{
		printf("parentprocess\n");
		wait(&status);
		
	}
}

