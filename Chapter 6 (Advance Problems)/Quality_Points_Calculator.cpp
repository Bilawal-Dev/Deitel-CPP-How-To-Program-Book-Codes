#include<iostream>
using namespace std;

int qualityPoints(int points){
    if(points <= 90 && points >= 100)
        return 4;
    else if(points <= 80 && points >= 89)
        return 3;
    else if(points <= 70 && points >= 79)
        return 2;
    else if(points <= 60 && points >= 69)
        return 1;
    else 
        return 0;
}

int main(){
    cout<<"The Grade Of Student Is As :     "<<qualityPoints(50)<<endl;
}