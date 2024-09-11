#include<iostream>
using namespace std;

void palindromeCheckFn(int num){
    int digit1 = (num / 10000) % 10;
    int digit2 = (num / 1000) % 10;
    int digit3 = (num / 100) % 10;
    int digit4 = (num / 10) % 10;
    int digit5 = (num / 1) % 10;

    if(digit1 == digit5 && digit2 == digit4)
        cout<<"This Is A Palindrome Number!"<<endl;
    else
        cout<<"This Is Not A Palindrome Number!"<<endl;
}

int main(){
    int number;
    cout<<"Enter A Number :     ";
    cin>>number;

    try{
        if(number <= 10000 || number >= 99999)
            throw 45;
        else
            palindromeCheckFn(number);
    }
    catch(int error){
        cout<<"Error "<<error<<"! Please Enter Valid 5 Digit Number"<<endl;
    }
}