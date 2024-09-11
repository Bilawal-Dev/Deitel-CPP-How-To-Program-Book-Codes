#include<iostream>
#include<math.h>
using namespace std;

int digitsCounter(int num){
    int count  =  1;
    while(num / 10 != 0){
        num = num / 10;
        count++;
    }
    return count;
}

void digitsSeperator(int* arr , int size , int num){
    int dividend = pow(10 , digitsCounter(num) - 1);
    for(int i = 0 ; i < size ; i++){
        *arr = (num / dividend) % 10;
        dividend = dividend / 10;
        arr--;
    }
    // digits[9] = (binaryNumber / 1000000000) % 10;
    // digits[8] = (binaryNumber / 100000000) % 10; 
    // digits[7] = (binaryNumber / 10000000) % 10;
    // digits[6] = (binaryNumber / 1000000) % 10;
    // digits[5] = (binaryNumber / 100000) % 10;
    // digits[4] = (binaryNumber / 10000) % 10;
    // digits[3] = (binaryNumber / 1000) % 10;
    // digits[2] = (binaryNumber / 100) % 10;
    // digits[1] = (binaryNumber / 10) % 10;
    // digits[0] = (binaryNumber / 1) % 10;
}

int main(){
    int binaryNumber;
    cout<<"Enter The Binary Number      :       ";
    cin>>binaryNumber;

    int digitCount = digitsCounter(binaryNumber);
    
    int decimalNumber = 0;
    
    int digits[digitCount];

    digitsSeperator(&digits[digitCount - 1] , digitCount , binaryNumber);
    
    for(int i = 0 ; i < digitCount ; i++){
        decimalNumber = decimalNumber + (digits[i] * pow(2 , i));
    }

    cout<<"The Decimal Equivalent Of "<<binaryNumber<<" Is  :       "<<decimalNumber<<endl;
}