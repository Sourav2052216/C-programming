#include<iostream>
using namespace std;
int sum(int a,int b){                            //4---->It find sum & the value of num1 &num2 putted here
    int c=a+b;                                   //5---->c= 3+4 so the value of c=7
    return c;
}
int main(){
    int num1,num2;
    cout<<"Enter your first number to add:"<<endl;
    cin>>num1;                                  //2---->suppose num1=3 given by user
    cout<<"Enter your Second number to add:"<<endl;
    cin>>num2;                                // 3---->supposer num2=4 given by user
    cout<<"The sum is: "<<sum(num1, num2)<<endl;//1---->First off all it find sum
    return 0;                                   //6----> return the value of c =7
}
