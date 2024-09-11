#include<iostream>
using namespace std;

int main(){
    char alphabet;
    cout<<"Enter An English Alphabet Or An Special Character :  ";
    cin>>alphabet;
    cout<<"\nThe ASCII Value Of "<<alphabet<<" Is As        :  "<<static_cast<int>(alphabet);
}