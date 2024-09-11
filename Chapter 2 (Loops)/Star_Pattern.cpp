#include<iostream>
using namespace std;

int main(){
    for(int i = 1 ; i <= 3 ; i++)
    {
        for(int j = 3 ; j >= i ; j--){
            cout<<" ";
        }
        for(int k = 1 ; k <= i ; k++){
            cout<<"*";
        }
        for(int l = 2 ; l <= i ; l++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 1 ; i <= 6 ; i++)
    {
        for(int j = 1 ; j <= 5 ; j++)
        {
            if(j == 4)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}