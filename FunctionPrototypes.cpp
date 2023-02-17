#include<iostream>
using namespace std;
// Function prototypes:
//type function-name(arguments)
// int sum(int a,int b);----> Acceptable
// int sum(int a, b);----> Not acceptable
//
int sum(int a,int b);       //FUNCTION PROTOTYPE DECLEARED BEFORE THE PROGRAM
int main(){
    int num1,num2;
    cout<<"Enter your first number to add:"<<endl;
    cin>>num1;                                 
    cout<<"Enter your Second number to add:"<<endl;
    cin>>num2;                                
    cout<<"The sum is: "<<sum(num1, num2)<<endl;
    return 0;
    
}
int sum(int a,int b){        // FUNCTION
// FORMAL PARAMETERS a AND b WILL BE TAKING THE VALUE FROM ACTUAL PARAMETERS num1 AND num2

    int c=a+b;                                   
    return c;
}
