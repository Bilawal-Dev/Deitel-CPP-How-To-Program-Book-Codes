#include<iostream>
using namespace std;

int main(){
    for(int i = 1 ; i <= 8 ; i++)
    {
        for(int j = 1 ; j <= 8 ; j++)
        {
            if(i % 2 != 0){
                cout<<"* ";
                cout<<" ";
            }
            else{
                cout<<" ";
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}