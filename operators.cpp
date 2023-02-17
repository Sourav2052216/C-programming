#include<iostream>
using namespace std;

int main(){
    int a=12, b=6;
    cout<< "Operators in c++"<< endl; 
    cout<<endl;

    cout<< "Following are the types of operators in c++"<< endl;

    //Arithmetic operators:
    cout<<"The value of a + b ="<< a+b<<endl;
    cout<<"The value of a - b ="<< a-b<<endl;
    cout<<"The value of a * b ="<< a*b<<endl;
    cout<<"The value of a / b ="<< a/b<<endl;
    cout<<"The value of a % b ="<< a%b<<endl;   // modulo operator
    cout<<"The value of a ++ ="<< a++<<endl;    // first print a, Here "a=12" then increment a, So in the next line the value of "a" should be = "13"
    cout<<"The value of a -- ="<< a--<<endl;    // first print a, Here "a=13" then decrement a, So in the next line the value of "a" should be = "12"
    cout<<"The value of ++ a ="<< ++a<<endl;    // First increment "a" here "a=13" then print a, so the value of a is: "13"
    cout<<"The value of a -- ="<< --a<<endl;    // First decrement "a" here "a=12" then print a, so the value of a is: "12"
    cout<<endl;

    /*
    Assingment operator: used to assign values to variables.
    int a =3,b=9;
    char d ='d';
    */

   // Comparision operators:
    cout<<"Following are the types of Comparision operators"<<endl;
    cout<<"The value of a == b is:"<< (a==b)<<endl; // Here a=12 & b=6,So here a==b condition is not satisfied,So the o/p is :0
    cout<<"The value of a != b is:"<< (a!=b)<<endl; // Here a!=b condition is satisfied so the o/p is: 1
    cout<<"The value of a >= b is:"<< (a>=b)<<endl; // Here a>=b condition is satisfied so the o/p is: 1
    cout<<"The value of a <= b is:"<< (a<=b)<<endl; // Here a<=b condition is not satisfied so the o/p is: 0
    cout<<"The value of a  > b is:"<< (a>b)<<endl;  // Here a>b condition is satisfied so the o/p is: 1
    cout<<"The value of a  < b is:"<< (a<b)<<endl;  // Here a<b condition is not satisfied so the o/p is: 0
    cout<<endl;

    //Logical operators :
    cout<<"Following are the types of Logical operators"<<endl;
    cout<<"The value of logical AND operator ((a == b) && (a < b)) is:"<< ((a==b)&&(a<b))<<endl; // Here ((a == b) && (a < b)) Condition is not satisfied, So output is: 0
    cout<<"The value of ((a == b) && (a > b)) is:"<< ((a==b)&&(a>b))<<endl; //Here "&&"---> It is called logical AND operator, In this operator Two given conditions must be satisfied.
    cout<<"The value of logical OR operator((a == b) || (a > b)) is:"<< ((a==b)||(a>b))<<endl; //Here "||"---> It is called logical OR operator, In this operator any one given conditions must be satisfied.
    cout<<"The value of logical NOT operator !(a >= b) is:"<<!(a>=b)<<endl;//Here "!" is called NOT operator, This operator reverse the output.
    cout<<endl;
    cout<<endl;

    
    
    return 0;
    
} 
