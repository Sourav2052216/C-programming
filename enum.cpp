#include<iostream>
using namespace std;

int main(){
    enum Meal{breakfast, lunch,dinner};// For allocate breakfast=0; lunch=1;Dinner=2, we use enum.
    cout<< breakfast;
    cout<<lunch;
    cout<< dinner;
    Meal m1=breakfast;
    cout<<m1<<endl;
    return 0;
}