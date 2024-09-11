#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int perp;
    int base;
    int hypo;

    for(int perp = 1 ; perp <= 500 ; perp++)
    {
        for(int base = 1 ; base <= 500 ; base++)
        {
            for(int hypo = 1 ; hypo <= 500 ; hypo++)
            {
                if((hypo * hypo) == (perp * perp) + (base * base) )
                {
                    cout<<"(Hypotenuse , Perpendicular , Base) => ";
                    cout<<"("<<hypo<<" , "<<perp<<" ,"<<setw(4)<<base<<")   "<<"Is A Pythagorean Triple."<<endl<<endl;
                }
            }
        }
    }
}