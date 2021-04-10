//Program to unlink the file and remove the directory
#include<iostream>
#include<sys/stat.h>
#include<unistd.h>

using namespace std;

int main()
{
    char newFile[] = "/home/swapnil/Desktop/NewFolder/file.txt";
    char newDir[] = "/home/swapnil/Desktop/NewFolder";

    unlink(newFile);

    if(rmdir(newDir)!=0)
        cout<<"Unable to remove dir"<<endl;
    else
        cout<<"Successfully removed directory"<<endl;

    return 0;
}

/*
Output:
Successfully removed directory
*/