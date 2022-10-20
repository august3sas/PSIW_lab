#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#include<windows.h>
#define MAX 10
int main(int argc, char* argv[])
{
    char buf[MAX], k[MAX];
    int fd_s, fd_r, lbajt;
    if(argc<3)return 0;
    fd_s=open(argv[1], O_RDONLY);
    if(fd_s==-1)return 0;
    fd_r=creat(argv[2],0640);
    if(fd_r==-1)return 0;

    while((lbajt=read(fd_s,buf,MAX))>0)
    {
        for(int i=0;i<lbajt;i++)
        {
            k[i]=buf[lbajt-i-1];
            printf("%c",k[i]);
        }
        if(write(fd_r,buf,lbajt==-1))
        {
            return 0;
        }
    }
    if(lbajt==-1)return 0;
    if(close(fd_s)==-1||close(fd_r)==-1)return 0;
}