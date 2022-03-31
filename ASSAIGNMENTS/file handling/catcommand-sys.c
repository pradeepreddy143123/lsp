/*
write own version of cat command
*/

#include<stdio.h>
#include<unistd.h>
#include<errno.h>
#include<stdlib.h>
#include <fcntl.h>
int main(int argc,char *argv[])
{

printf ("file name :%s",argv[1]);

//opening a file

int openret,readret,writeret;
char *buff;
buff=(char *)malloc(sizeof(char));
openret= open(argv[1],O_RDONLY);
if(openret<0)
{
perror("open fails:");
printf("\nerr no:%d",errno);
exit(0);
}

//reading a file

readret = read(openret,buff,4096);
if(readret<0)
{
perror("read fails:");
printf("\nerr no:%d",errno);
exit(0);
}

//writing a file

writeret = write(1,buff,readret);
if(writeret<0)
{
perror("write fails:");
printf("\nerr no:%d",errno);
exit(0);
}

//closing a file

if(close(openret))
{
printf("close fails\n");
exit(0);
}
return 0;
}
