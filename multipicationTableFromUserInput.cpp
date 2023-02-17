#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,c;
    cout<<"Enter your number:"<<endl;
    cin>>a;

    for(b=1;b<11;b++){
        c=a*b;
        cout<<a<<"*"<<b<<"="<<c<<endl;
    }
    return 0;
}