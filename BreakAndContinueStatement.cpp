#include<iostream>
using namespace std;

int main(){
 /*   for (int i = 0; i < 40; i++)
    {
        if(i==20){
        break; //Break statement stops the entire process of the loop.
        }
        cout<<i<<endl;
    }
    
    return 0;
}
*/
for (int i = 0; i < 40; i++)
    {
        if(i==2){
        continue; // Continue statement only stops the current iteration of the loop.
        }
        cout<<i<<endl;
    }
    
    return 0;
}