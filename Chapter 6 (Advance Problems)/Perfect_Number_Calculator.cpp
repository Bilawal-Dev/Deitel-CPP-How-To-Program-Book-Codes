#include<iostream>
#include<iomanip>
using namespace std;

void perfectNoFn(){
    int sum = 0;
    for(int num = 1 ; num <= 1000 ; num++)
    {
        sum = 0;
        for(int divisor = 1 ; divisor < num ; divisor++)
        {
            if(num % divisor == 0){
                sum = sum + divisor;
            }
        }
        if(sum == num)
            cout<<num<<endl;
    }
}

int main(){
    perfectNoFn();
}