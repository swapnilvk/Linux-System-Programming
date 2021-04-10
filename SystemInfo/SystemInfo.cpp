//Program to print the system info on Linux environment

#include<iostream>
#include<errno.h>
#include<sys/utsname.h>

using namespace std;

int main()
{
    
    struct utsname  buff;
    errno = 0;
    if(uname(&buff)!=0)
    {
        cout<<"There is error"<<endl;
        exit(EXIT_FAILURE);
    }
    cout<<"System name: "<<buff.sysname<<endl;
    cout<<"Node name: "<<buff.nodename<<endl;
    cout<<"Release: "<<buff.release<<endl;
    cout<<"Version: "<<buff.version<<endl;
    return 0;
}
/* Output:
System name: Linux
Node name: swapnil-Lenovo
Release: 5.4.0-70-generic
Version: #78~18.04.1-Ubuntu SMP Sat Mar 20 14:10:07 UTC 2021
*/