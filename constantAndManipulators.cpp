#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    const int f= 34;
    
    cout<<"The Value of a was:"<<f<<endl;
    // int b= 43;  We will get an error because b is decleared as a constant, we can't change our constant variable value.
   // Variable can change in programming
    
    // Constants in c++
    /*
    Constant can't change.
    constant write in program by writng "const" keyword before any variable which we want to make as constant.
    */



/*
Manipulator: It's help us to data dishplay formatting; 
eg: "endl"---> Give a new line,&
    "setw"--->come form header file "iomanip"; used for given width of any number
*/

    int a=2, b=32, c=432, d=5421;
    cout<<"The value of a is(Without setw)"<<a<<endl;
    cout<<"The value of b is(Without setw)"<<b<<endl;
    cout<<"The value of c is(Without setw)"<<c<<endl;
    cout<<"The value of d is(Without setw)"<<d<<endl;

    cout<<"The value of a is(With setw)"<<setw(4)<<a<<endl;
    cout<<"The value of b is(With setw)"<<setw(4)<<b<<endl;
    cout<<"The value of c is(With setw)"<<setw(4)<<c<<endl;
    cout<<"The value of d is(With setw)"<<setw(4)<<d<<endl;

    //operator precidence:
    int g=3,K=2;
    int x=((((g*5)+K)-45)+87);//precident and asoosiativity wise the() is made.
    cout<<endl;
    cout<<x;
    cout<<endl;

/*
    Category              Operator                         Associativity

    Postfix             () [] -> . ++ - -                  Left to right
    Unary               + - ! ~ ++ - -(type)* & sizeof     Right to left
    Multiplicative      * / %                              Left to right  
    Additive            + -                                Left to right
    Shift               << >>                              Left to right
    Relational          < <= > >=                          Left to right
    Equality            == !=                              Left to right
    Bitwise AND         &                                  Left to right
    Bitwise XOR         ^                                  Left to right
    Bitwise OR          |                                  Left to right
    Logical AND         &&	                               Left to right
    Logical OR          ||	                               Left to right
    Conditional         ?:	                               Right to left
    Assignment          = += -= *= /= %=>>= <<= &= ^= |=   Right to left
    Comma               ,	                               Left to right
*/
    return 0;
}

/*  
    Rules:
    1. Any operator comes first in chart make a bracket
    2.When two operator is in a same place then we see their associativity
*/