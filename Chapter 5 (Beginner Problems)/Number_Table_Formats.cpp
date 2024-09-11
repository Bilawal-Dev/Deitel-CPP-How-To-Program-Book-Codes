#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int num;
    cout<<"\nEnter The Number You Want To Print The Table Of :    ";
    cin>>num;

    cout<<"\n\nThe Table In Octal Equivalent Is As :  \n\n";
    for(int i = 1 ; i <= 10 ; i++)
    {
        cout<<"->   "<<oct<<num<<setw(5)<<"x"<<setw(5)<<i<<setw(10)<<":"<<setw(10)<<dec<<num*i<<endl;
    }

    cout<<"\n\nThe Table In Dec Equivalent Is As :  \n\n";
    for(int i = 1 ; i <= 10 ; i++)
    {
        cout<<"->   "<<dec<<num<<setw(5)<<"x"<<setw(5)<<i<<setw(10)<<":"<<setw(10)<<dec<<num*i<<endl;
    }

    cout<<"\n\nThe Table In Hex Equivalent Is As :  \n\n";
    for(int i = 1 ; i <= 10 ; i++)
    {
        cout<<"->   "<<hex<<num<<setw(5)<<"x"<<setw(5)<<i<<setw(10)<<":"<<setw(10)<<dec<<num*i<<endl;
    }
}