#include<iostream>
using namespace std;

int FacFn(int num){
    int facResult = 1;
    for(int i = 1 ; i <= num ; i++){
        facResult = facResult * i;
    }
    return facResult;
}

int FacRecursiveFn(int num){
    if(num == 0 || num == 1){
        return 1;
    }
    return num * FacRecursiveFn(num - 1);
}

int main(){
    cout<<"Factorial Of 5 By Loop      : "<<FacFn(5)<<endl;
    cout<<"Factorial Of 5 By Recursion : "<<FacRecursiveFn(5)<<endl;
}