#include <iostream>
#include<time.h>

using namespace std;

void Timefunction()
{
    cout<<"Function starts"<<endl;
    cout<<"Press any key to function"<<endl;
    for(;;)
    {
        if(getchar())
            break;
    }
    cout<<"Function ends"<<endl;
}

int main()
{
    clock_t t;
    
    t = clock();
    Timefunction();
    t = clock()-t;
    double time_taken_by_function = ((double)t)/CLOCKS_PER_SEC;
    cout<<"Time taken by function: "<< time_taken_by_function<<endl;

    return 0;
}