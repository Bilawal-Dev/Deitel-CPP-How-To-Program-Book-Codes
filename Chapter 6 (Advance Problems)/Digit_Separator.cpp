#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int digitCount(int num){
    int count = 0;
    while(num != 0){
        num = num / 10;
        count++;
    }
    return count;
}

void digitSepFn(int num)
{
    int dividend = pow(10 , digitCount(num) - 1);
    for( ; num != 0 ; )
    {
        cout<<(num/dividend)%10<<setw(10);
        dividend = dividend / 10;
    }
}

int main(){
    int number;
    cout<<"Enter Any Number To Seperate Into Digits :   ";
    cin>>number;
    cout<<"\n->The Number Of Digits If As :     "<<digitCount(number)<<endl<<endl;
    digitSepFn(number);
}