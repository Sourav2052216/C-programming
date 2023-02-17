#include<iostream>
using namespace std;

union employee
{
    int eID;
    char favchar;
    float salary;
};

union money         // any one at a time, so memory allocation is 4 in this case
{
    /* data */
    int rice;       //4bytes
    char car;       //1 bytes
    float pounds;   // 4 bytes
};


int main(){
    union money m1;
    m1.rice=34;
    //m1.car='c'; // o/p is wrong because of memory management
    cout<<m1.rice;

    return 0;
}