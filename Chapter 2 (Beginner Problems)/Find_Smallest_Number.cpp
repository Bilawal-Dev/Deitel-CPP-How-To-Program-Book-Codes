#include<iostream>
using namespace std;

int main(){
    int smallest = INT_MAX;
    int numbers[5];

    for(int i = 0 ; i < 5 ; i++)
    {
        cout<<"Enter Value :    ";
        cin>>numbers[i];
    }

    for(int i = 0 ; i < 5 ; i++)
    {
        if(smallest > numbers[i])
            smallest = numbers[i];
    }

    cout<<"The Smallest Number Is :     "<<smallest<<endl;
}