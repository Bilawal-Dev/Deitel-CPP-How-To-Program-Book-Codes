#include<iostream>
#include<iomanip>
using namespace std;

double secondsFn(int hours , int mins , int sec){
    return hours * 3600 + mins * 60 + sec;
}

int main(){
    int hour , min , sec;
    cout<<"Enter Hours Mins And Seconds :   ";
    cin>>hour>>min>>sec;
    cout<<"\n\nThe Total Seconds Are As :   "<<secondsFn(hour , min , sec)<<" Seconds";
}