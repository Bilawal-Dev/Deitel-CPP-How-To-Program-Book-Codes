#include<iostream>
using namespace std;

int main(){
    double x1 , y1;
    double x2 , y2;
    double result1, result2;

    cout<<"Enter The Distance Of First Points  :     ";
    cin>>x1>>y1;
    cout<<"Enter The Distance Of Second Points :     ";
    cin>>x2>>y2;

    result1 = x2-x1;
    result2 = y2-y1;

    cout<<"\nThe Distance Between The Points Is As :      ";
    cout<<result1<<"  ,  "<<result2<<endl;
}