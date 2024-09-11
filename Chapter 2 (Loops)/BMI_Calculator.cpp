#include<iostream>
using namespace std;

void bmiCalculator(){
    double weight;
    double height;
    double BMI;
    cout<<"Enter The Weight In Kilograms :  ";
    cin>>weight;
    cout<<"Enter The Height In Meters    :  ";
    cin>>height;
    BMI = (weight) / (height * height);
    if(BMI >= 0 && BMI <= 18.5)
        cout<<"BMI : "<<BMI<<" Underweight!";
    else if(BMI > 18.5 && BMI <= 24.9)
        cout<<"BMI : "<<BMI<<" Nomral!";
    else if(BMI > 25 && BMI <= 29.9)
        cout<<"BMI : "<<BMI<<" Overweight!";
    else if(BMI >= 30)
        cout<<"BMI : "<<BMI<<" Obese!";
}

int main(){
    bmiCalculator();
}