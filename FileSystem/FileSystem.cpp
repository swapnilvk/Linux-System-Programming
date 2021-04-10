//Program to get the block size and free blocks available on file system
#include<iostream>
#include<errno.h>
#include<sys/statvfs.h>

using namespace std;

int main()
{
    struct statvfs buff;
    if(statvfs(".",&buff)==-1)
    {
        cout<<"Error"<<endl;
        exit (1);
    }
    cout<<"Each block has size of "<<buff.f_bsize<<" bytes"<<endl;
    cout<<"There are "<<buff.f_favail<<" blocks vailable out of "<<buff.f_blocks<<endl;

    return 0;
}

/*
Output: 
Each block has size of 4096 bytes
There are 15873939 blocks vailable out of 25193880
*/