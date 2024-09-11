#include<iostream>
using namespace std;

int main(){
    double expenses;
    cout<<"Kindly Enter Your Expenses    :     ";
    cin>>expenses;

    double taxrate = 0.23;

    double totalexpenses = expenses + (taxrate * expenses);

    cout<<"\n\nYour Total Expenses After Tax :      "<<totalexpenses<<endl;;
    cout<<"->   Expenses :  "<<expenses<<endl;
    cout<<"->   Tax      :  "<<(taxrate * expenses)<<endl;
}