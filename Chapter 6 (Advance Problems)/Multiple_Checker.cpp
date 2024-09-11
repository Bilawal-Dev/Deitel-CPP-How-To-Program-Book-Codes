#include<iostream>
using namespace std;

bool multipleFn(int firstNo , int secondNo){
    if(secondNo % firstNo == 0)
        return true;
    else
        return false;
}

int main(){
    int num1 , num2;
    bool checkVar = true;
    char againTry;
    while(checkVar){
        cout<<"Enter First  No : ";
        cin>>num1;
        cout<<"Enter Second No : ";
        cin>>num2;
        if(multipleFn(num1 , num2))
            cout<<"\n->The Second Number Is Multiple Of First Number"<<endl;
        else 
            cout<<"\n->The Second Number Is Not A Multiple Of First Number"<<endl;;

        cout<<"\nPress Y To Enter Numbers Again :   ";
        cin>>againTry;

        if(againTry != 'Y' && againTry != 'y'){
            checkVar = false;
        }
        cout<<endl;
    }
}