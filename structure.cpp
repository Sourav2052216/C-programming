/*
Structure: User defined datatypes,


*/
#include<iostream>
using namespace std;

struct employee
{
    int eID;
    char favchar;
    float salary;
};

int main(){
    struct employee sourav;
    sourav. eID = 1;
    sourav. favchar='c';
    sourav.salary=120000000;
    
    cout<<sourav.eID<<endl;
    cout<<sourav.favchar<<endl;
    cout<<sourav.salary<<endl;

    return 0;
}