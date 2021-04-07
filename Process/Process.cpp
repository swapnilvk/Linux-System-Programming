#include<iostream>
#include<unistd.h>

using namespace std;

int main()
{
    int process_id, parent_process_id;
    process_id = getpid();
    parent_process_id = getppid();

    cout<<"PROCESS ID: "<<process_id<<" PARENT PROCESS ID: "<<parent_process_id<<endl;
    return 0;
}