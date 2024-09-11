#include<iostream>
using namespace std;

void primeNo(){
    bool checkVar;
    cout<<"All The Prime Numbers From 2 - 100 : "<<endl;
    for(int i = 2 ; i <= 100 ; i++)
    {
        checkVar = true;
        for(int j = 2 ; j < i ; j++)
        {
            if(i % j == 0){
                checkVar = false;
                break;
            }
        }
        if(checkVar == true)
            cout<<i<<endl;
    }
}

int main(){
    primeNo();
}