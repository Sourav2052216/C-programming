#include<iostream>
using namespace std;

void change(int n)
{
    n=n*n;
    cout<<"Value in function:"<<n;
}
int main(){
    int n;
    cout<<endl;
    cout<<"\nEnter the value:";
    cout<<endl;
    cin>>n;
    change(n);
    cout<<"\nValue in main: "<<n;
    cout<<endl;
    
    return 0;
}