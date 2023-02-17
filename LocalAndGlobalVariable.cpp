#include<iostream>
using namespace std;

int glow=7;
//Function:
void sum(){
    int a;  // GLOBAL VARIABLE
    cout<<glow;
}
// Execution starts from main function:
int main()
{
    int glow=6;
    sum();
    glow=78; // LOCAL VARIABLE
    cout<<glow;
    return 0;
}
//presendence given to local variable than global variable