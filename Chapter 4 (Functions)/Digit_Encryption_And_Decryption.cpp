#include<iostream>
#include<math.h>
using namespace std;

void digitsSeperator(int* arr , int size ,int num){
    int dividend = 1000;
    for(int i = 0 ; i < size ; i++)
    {
        *arr = (num / dividend) % 10;
        dividend = dividend / 10;
        arr++; 
    }
}

void digitsEncryptionAlgorithm(int* arr , int size){
    for(int i = 0 ; i < size ; i++)
    {
        *arr = (*arr + 7) % 10;
        arr++;
    }
}

void digitsDecryptionAlgorithm(int* arr , int size){
    for(int i = 0 ; i < size ; i++)
    {
        *arr = (*arr + 3) % 10;
        arr++;
    }
}

void traversingArray(int* arr , int size){
    for(int i = 0 ; i < size ; i++)
    {
        cout<<"     "<<*arr;
        arr++;
    }
    cout<<endl<<endl;
}

int main(){
    int number;
    cout<<"Enter 4 Digit Number :       ";
    cin>>number;

    int digits[4];

    digitsSeperator(&digits[0] , 4 , number);
    cout<<"\n\n->Seperating Digits Of Number =>    \n\n";
    traversingArray(&digits[0] , 4);

    digitsEncryptionAlgorithm(&digits[0] , 4);
    cout<<"->Ecrypting The Message       =>    \n\n";
    traversingArray(&digits[0] , 4);

    digitsDecryptionAlgorithm(&digits[0] , 4);
    cout<<"->Decrypting The Message      =>    \n\n";
    traversingArray(&digits[0] , 4);
}