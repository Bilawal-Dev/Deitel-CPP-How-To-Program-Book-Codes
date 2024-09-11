#include<iostream>
using namespace std;

int smallestFn(int x , int y , int z);

int greatestFn(int x , int y , int z);

int main(){
    int a , b , c;
    cout<<"Input Three Different Integers:  ";
    cin>>a>>b>>c;
    cout<<"Sum      Is   "<<a+b+c<<endl;
    cout<<"Average  Is   "<<(a+b+c)/3<<endl;
    cout<<"Product  Is   "<<a*b*c<<endl;
    cout<<"Smallest Is   "<<smallestFn(a , b , c)<<endl;
    cout<<"Greatest Is   "<<greatestFn(a , b , c)<<endl;
}

int smallestFn(int x , int y , int z){
    if(x <= y && x <= z)
        return x;
    else if(y <= x && y <= z)
        return y;
    else 
        return z;
};

int greatestFn(int x , int y , int z){
    if(x >= y && x >= z)
        return x;
    else if(y >= x && y >= z)
        return y;
    else 
        return z;
};