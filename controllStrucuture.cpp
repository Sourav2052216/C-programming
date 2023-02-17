/*
Controll strucure are Three types:(Basic structure)
1. Sequence strucuture: ENTRY--->ACTION-1 ------> ACTION-2 -----> EXIT
2. Selection strucutre: ENTRY ---->CONDITION----->TRUE/FALSE-----> IF TRUE(A1) || FALSE(A2)------>EXIT
3. Loop structure: ENTRY----->LOOP----->CONDITION---->TRUE-------> LOOP
                                                 |---->FALSE------>ACTION 2     
    ------> if else statement:
    int main(){

        int i=0;
        if(i<3)
        {
        cout<<i<<endl;
        return 0;
        }
    }
    --------> if else ladder: show in program
    ---------> Switch case:
   switch(expression){
    case 1:
    action 1
   }
   default:{
    action 
   }

*/

#include<iostream>
using namespace std;
int main()
{
    cout<<"This is tutorial for controll structure"<<endl;
   int age;
    cout<<"Tell me your age:"<<endl;
    cin >> age;
    /*  if((age<18)&& (age>0)){
        cout<<"You can't enter in this club"<<endl;
    }
    else if(age==18){
        cout<<"You can go to the First floor only"<<endl;
    }
    else {
        cout<<"WELCOME TO THE PARTY"<< endl;
    }

    */
    switch (age)
    {
    case 18:
        cout<<"you are 18"<<endl;
        break; // stop this program; and jump the whole loop
    case 22:
        cout<<"you are 22"<<endl;
        break; 
    default:
    cout<<"No special cases"<<endl;
        break;
    }
    cout<<"done with switch case"<<endl;
    return 0;
}
// IF THERE IS NO BREAK STATEMENT ALL CASES ARE PRINT