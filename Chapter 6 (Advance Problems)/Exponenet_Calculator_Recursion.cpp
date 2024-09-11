#include<iostream>
using namespace std;

int basePowerCal(int base , int power){
    int result;
    if(power == 1)
        return base;
    result = base * basePowerCal(base , power - 1);
    return result;
}

int main(){
    int base , power;
    cout<<"Enter The Base And Power :   ";
    cin>>base>>power;
    cout<<"\nThe Result Is As :   "<<basePowerCal(base , power)<<endl;
}