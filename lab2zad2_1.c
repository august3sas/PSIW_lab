#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define MAX 10
int main(int argc, char* argv[])
{
    char buf[MAX], k[MAX];
    int fd_s;
    int lbajt;
    if(argc<2)return 0;
    fd_s=open(argv[1],O_RDWR);
    if(fd_s==-1)return 0;
    while((lbajt=read(fd_s,buf,MAX))>0)
    {
        for(int i=0;i<lbajt;i++)
        {
            k[i]=buf[lbajt-i-1];
        }
        fd_s=creat(argv[1],0640);
        if(write(fd_s,k,MAX)==-1)
        {
            return 0;
        }
    }
    if(lbajt==-1)return 0;
    if(close(fd_s)==-1)return 0;
}