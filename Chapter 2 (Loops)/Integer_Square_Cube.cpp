#include<iostream>
using namespace std;

int main(){
    cout<<"Integer   Square   Cube"<<endl;
    for(int i = 0 ; i < 10 ; i++)
    {
        cout<<i;
        cout<<"         ";
        cout<<i*i;
        if(i < 4)
            cout<<"       ";
        else
            cout<<"      ";
        cout<<i*i*i<<endl;
    }
}