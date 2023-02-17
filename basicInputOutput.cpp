#include<iostream> //iostream = input output stream
using namespace std;

int main(){
    int num1, num2;
    
    cout<<"Enter the value num1:\n";      //"<<"---> Insertion operator
    cin>>num1;                            //">>"---> Extarction operator

    cout<<"Enter the value num2:\n";     
    cin>>num2;  

    cout<<"The sum is:"<<num1+num2;

    return 0;
}


/*
---> C++ comes with libraries which helps us in performing i/0.
    In c++ Sequence of bytes corresponding to I/O are commonly known as "streams"
---> Input stream: Direction of flow of bytes take place from input device
    (ex- keyboard) to the main memory.
---> Output stream: Direction of flow of bytes take place from main memory
    (ex- Display) to the output device.       
*/


