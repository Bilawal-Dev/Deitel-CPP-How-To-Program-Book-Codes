#include<iostream>
using namespace std;

int main(){
    for(int i = 1 ; i <= 5 ; i++)
    {
        for(int j = 5 ; j >= i ; j--)
        {
            if(j == i)
                cout<<"*";
            else
                cout<<" ";
        }
        for(int k = 2 ; k <= i ; k++)
        {
            cout<<"  ";
        }
        cout<<"*";
        cout<<endl;
    }
    for(int i = 1 ; i <= 4 ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            if(j == i)
                cout<<"*";
            else
                cout<<" ";
        }
        for(int k = 4 ; k >= i ; k--)
        {
            cout<<"  ";
        }
        cout<<"*";
        cout<<endl;
    }
}