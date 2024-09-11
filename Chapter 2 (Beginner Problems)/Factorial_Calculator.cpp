#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int fac = 1;

    for(int i = 1 ; i <= 5 ; i++)
    {
        fac = 1;
        for(int j = 1 ; j <= i ; j++)
        {
            fac = fac * j;
        }
        cout<<setw(2)<<i<<"!    ="<<setw(10)<<fac<<endl;
    }
}