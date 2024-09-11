#include<iostream>
#include<iomanip>
using namespace std;

int FibonaciFn(int terms){
    int firstNo  = 0;
    int secondNo = 1;
    for(int i = 1 ; i <= terms/2 ; i++){
        cout<<setw(10)<<firstNo<<setw(10)<<secondNo;
        firstNo = firstNo + secondNo;
        secondNo = secondNo + firstNo;
    }
    if(terms % 2 != 0)
        cout<<setw(10)<<secondNo;
    return secondNo;
}

int FibonaciRecursiveFn(int terms){
    if(terms == 0){
        return 0;
    }
    if(terms == 1){
        return 1;
    }
    return FibonaciRecursiveFn(terms - 1) + FibonaciRecursiveFn(terms - 2);
}



int main(){
    FibonaciFn(5);
    cout<<endl<<endl;
    cout<<"The Fifth Number Of Fibonacci Series Is :    "<<FibonaciRecursiveFn(5);
}