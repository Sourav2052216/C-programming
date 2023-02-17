/*
Array:
---> Collection of items of similar type stored in contiguous memory location
---> Sometimes, a simple variable is not enough to hold all data
|  0  |  1  | 2  | 3  |......|2500|
int marks [2500]; syntax of array
------------------>datatype arrayName[size]


*/

#include<iostream>
using namespace std;

int main(){
 
  // Array declearation Example:1
  
    int mathMarks[4];   // [4]:Size of the array.
    mathMarks[0]=213;
    mathMarks[1]=221;
    mathMarks[2]=421;
    mathMarks[3]=621;

    cout<< "These are mathMarks:"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;
    cout<<endl;

  //Array declearation Example:2
    
    int marks[4]={23,43,56,89};
    cout<< "These are Marks:"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;

    marks[3]=32;// We can change the value of an array
    cout<<marks[3]<<endl;  
    
    return 0;
}