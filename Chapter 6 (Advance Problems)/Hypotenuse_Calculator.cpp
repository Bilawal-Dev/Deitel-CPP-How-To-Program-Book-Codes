#include<iostream>
using namespace std;

double hypoFn(double base , double perp){
    return base * base + perp * perp;
}

int main(){
    double base;
    double perp;
    cout<<"Enter The Base Of Triangle : ";
    cin>>base;
    cout<<"Enter The Perp Of Triange :  ";
    cin>>perp;
    cout<<"\n->The Answer Is As :   "<<hypoFn(base , perp);
}