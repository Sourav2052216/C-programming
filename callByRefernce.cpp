#include<iostream>
using namespace std;

void change(int &n)     // It gives new name of the old variable.
{
    n=n*n;
    cout<<"Value in function:"<<n;
}
int main(){
    int n;
    cout<<endl;
    cout<<"\nEnter the value:"<<endl;
    cin>>n;
    change(n);
    cout<<"\nValue in main: "<<n<<endl;
    
    
    return 0;
}