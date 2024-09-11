#include<iostream>
using namespace std;

double basePowerFn(double const base , double const power){
    double resultVal = 1;

    for(int i = 1 ; i <= power ; i++){
        resultVal = resultVal * base;
    }

    return resultVal;
}

int main(){
    double base;
    double power;

    cout<<"Enter The Base Number :  ";
    cin>>base;
    cout<<"Enter The Power The Base Number :  ";
    cin>>power;

    cout<<"\n->   The Answer Is As :     "<<basePowerFn(base , power);
}