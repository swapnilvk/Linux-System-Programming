//Program to Create derectory and file inside dir
#include<iostream>
#include<sys/stat.h>
#include<sys/types.h>
#include <fcntl.h>

using namespace std;

void Createdir(){
    int res = mkdir("/home/swapnil/Desktop/NewFolder",0777);
    if(res == 0){
        cout<<"Directory successfully created"<<endl;
    }
    else{   
        cout<<"Failed to create Directory"<<endl;
    }
}

void Createfile(){
        int fd;
    mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;
    char filename[] = "/home/swapnil/Desktop/NewFolder/file.txt";

    fd = creat(filename, mode);
}

int main()
{
    Createdir();
    Createfile(); //Create file inside dir
    return 0;
}