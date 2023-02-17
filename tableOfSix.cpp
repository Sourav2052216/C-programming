#include<iostream>
using namespace std;

int main(){
    cout<<"Multipication table of Six"<<endl;
   int a=6,b,c;
   b=1;
   do 
   {
    c=b*a;
    cout<<a<<"*"<<b<<"="<<c<<endl;
    b++;
   }
   while(b<11);
   return 0;
}
