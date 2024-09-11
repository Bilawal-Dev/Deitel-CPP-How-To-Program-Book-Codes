#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter Any Number From (1 - 30) :     ";
    cin>>number;

    cout<<"\n\n";

    try{
        if(number < 0 || number > 30)
        throw 45;
        else{
            for(int i = 1 ; i <= number ; i++)
            {
                cout<<"*";
            }
        }
    }
    catch(int error){
        cout<<"Error "<<error<<"! Please Enter Valid Values."<<endl;
    }
}