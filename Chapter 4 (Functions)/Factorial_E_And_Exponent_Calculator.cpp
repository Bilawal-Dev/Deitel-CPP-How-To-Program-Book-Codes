#include<iostream>
#include<math.h>
using namespace std;

int factorialCalculator(int num){
    int fac = 1;
    for(int i = 1 ; i <= num ; i++){
        fac = fac * i;
    }
    return fac;
}

double eCalculator(int num){
    double result = 0.00;
    for(int i = 0 ; i < num ; i++)
    {
        result = result + (1.00 / factorialCalculator(i));
    }
    return result;
}

double exCalculator(double num , double terms){
    double result = 0.00;
    for(int i = 0 ;  i < terms ; i++)
    {
        result = result + (pow(num , i) / factorialCalculator(i));
    }
    return result;
}

int main(){
    int number;
    cout<<"Enter A Positive Integer Number :    ";
    cin>>number;
    int factorial = factorialCalculator(number);
    cout<<"->   The Factorial Of "<<number<<" Is As :   "<<factorial<<endl;

    int terms;
    cout<<"\n\nEnter The Number Of Terms For Desired Accuracy Of e :    ";
    cin>>terms;
    double e = eCalculator(static_cast<double>(terms));
    cout<<"->   The Value Of Mathematical Constant e Accurate Upto "<<terms<<" Is As :   "<<e<<endl;

    int x;
    cout<<"\n\nEnter The Value Of x To Calculate e^x :      ";
    cin>>x;
    double ex = exCalculator(static_cast<double>(x) , static_cast<double>(terms));
    cout<<"->   The Value Of e^x Accurate Upto "<<terms<<" Terms When X Is "<<x<<" Is As :   "<<ex<<endl;
}