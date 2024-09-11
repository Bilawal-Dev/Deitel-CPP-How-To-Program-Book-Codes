#include<iostream>
using namespace std;

int main(){
    for(int i = 1 ; i <= 10; i++)
    {
        if(i == 1 || i == 10)
        {
            for(int j = 1 ; j <= 10 ; j++)
            {
                if(j == 4 || j == 5 || j == 6 || j == 7)
                    cout<<"*";
                else
                    cout<<" ";
            }
        }
        else if(i == 2 || i == 9)
        {
            for(int j = 1 ; j <= 10 ; j++)
            {
                if(j == 2 || j == 9)
                    cout<<"*";
                else
                    cout<<" ";
            }
        }
        else{
            for(int j = 1 ; j <= 10 ; j++)
            {
                if(j == 1 || j == 10)
                    cout<<"*";
                else
                    cout<<" ";
            }
        }
        cout<<endl;
    }
}