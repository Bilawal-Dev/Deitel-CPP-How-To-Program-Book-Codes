#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int terms;
    cout<<"Enter The Terms Upto Which Want To Find Accuracy Of Pie :    ";
    cin>>terms;

    double pie = 4;
    int odd = 3;

    for(int i = 1 ; i <= terms ; i++)
    {
        if(i % 2 != 0)
            pie = pie - (pie / odd);
        else
            pie = pie + (pie / odd);
        odd = odd + 2;
    }

    cout<<"\n\n->   Value Of Pie Is As :    "<<fixed<<setprecision(3)<<pie<<" Upto "<<terms<<" Accuracy"<<endl;
}