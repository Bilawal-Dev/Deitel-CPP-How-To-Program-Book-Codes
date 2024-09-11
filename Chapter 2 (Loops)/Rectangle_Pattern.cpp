#include<iostream>
using namespace std;

int main(){
    for(int i = 1 ; i <= 10 ; i++)
    {
        cout<<"*";
        for(int j = 1 ; j <= 7 ; j++){
            if(i == 1 || i == 10)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"*"<<endl;
    }
}