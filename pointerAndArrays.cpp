/*
pointer arithmetic formula:
address[new]=address[current]+i* sizeof[datatype]

*/

#include<iostream>
using namespace std;

int main(){
    int marks[4]={10,11,12,13};

    int*p= marks;
    cout<<"The value of *p: "<<*p<<endl;
    cout<<"The value of *(p+1): "<<*(p+1)<<endl;
    cout<<"The value of *(p+2): "<<*(p+2)<<endl;
    cout<<"The value of *(p+3): "<<*(p+3)<<endl;


    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    cout<<*p<<endl;
    cout<<*(--p)<<endl;


    return 0;
}