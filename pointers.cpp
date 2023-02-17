//pointers: It's a datatype, which holdds the address of other datatypes

#include<iostream>
using namespace std;

int main(){
    
    int a=3;
    //int* b= &a;       ---> Syntax of pointer.
    int* b;
    b = &a; //Syntax of pointer.
 //  & ---> (Address of) operator.
    
//  * ---> Dereference operator
    cout<<endl;
    cout<<"The address of b is:"<<b<<endl;
    cout<<"The address of a is:"<<&a<<endl;
    cout<<endl;

    cout<<"The Value of address of b is:"<<*b<<endl;//Value at operator
    cout<<endl;

// Pointers to pointer : A pointer variable which can store the address of a pointer

    int **c =&b; // Syntax of pointer to pointer. ; *c=b ; **c=a;
    cout<<"The address of b is:"<< &b<< endl;
    cout<<"The address of b is:"<< c << endl;
    cout<<"The value at address c is:"<< *c << endl;
    cout<<"The value at address value_at(value_at(c)) is:"<< **c << endl;

    return 0;
}