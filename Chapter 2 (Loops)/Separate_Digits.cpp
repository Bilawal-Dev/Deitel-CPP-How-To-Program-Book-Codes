#include<iostream>
using namespace std;

void seperateFn(int dummy_num){
    int digit1 = (dummy_num / 10000) % 10;
    int digit2 = (dummy_num / 1000) % 10;
    int digit3 = (dummy_num / 100) % 10;
    int digit4 = (dummy_num / 10) % 10;
    int digit5 = (dummy_num / 1) % 10;
    cout<<digit1<<"   "<<digit2<<"   "<<digit3<<"   "<<digit4<<"   "<<digit5;
}

int main(){
    int num;
    cout<<"Enter A Number :     ";
    cin>>num;

    try{
        if(num < 10000 || num > 99999){
            throw 69;}
        else{
            seperateFn(num);}
    }
    catch(int error){
        cout<<"Error Code "<<error<<" Please Enter Valid 5 Digit Number !";
    }
}