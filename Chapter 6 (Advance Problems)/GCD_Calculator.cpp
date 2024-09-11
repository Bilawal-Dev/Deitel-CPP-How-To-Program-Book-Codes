#include<iostream>
using namespace std;

int GCD(int num1 , int num2){
    int GCD = 0;
    for(int i = 1 ; i <= num1 && i <= num2 ; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            GCD = i;
        }
    }
    return GCD;
}

int main(){
    cout<<GCD(10 , 5)<<endl;
}