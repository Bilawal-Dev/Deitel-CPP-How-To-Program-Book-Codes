#include<iostream>
using namespace std;

int Function(int num){
    int reversed_Num = 0;
    int digit;
    while(num != 0 )
    {   
        digit = num % 10;
        reversed_Num =  (reversed_Num * 10) + digit;
        num = num / 10;
    }
    return reversed_Num;
}

int main(){
    cout<<Function(12345)<<endl;
}