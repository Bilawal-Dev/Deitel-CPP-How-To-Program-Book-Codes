#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter The Size Of The Side Of The Square :       ";
    cin>>size;

    for(int i = 1 ; i <= size ; i++)
    {
        cout<<"*";
        for(int j = 1 ; j <= (size - 2) ; j++)
        {
            if(i == 1 || i == size)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"*"<<endl;
    }
}