#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double population = 7.951;
    int year = 1;
    double increasedPopulation = 0;
    double prevPopulation = 0;

    cout << "\n\n                     Year                     World Population                    Increase In Population" << endl << endl;
    for(; year <= 75; year++) {
        cout<<setw(23)<<year;
        cout<<setw(28)<<fixed<<setprecision(1)<<population<<" Billions";
        cout<<setw(30)<<fixed<<setprecision(1)<<increasedPopulation<<" Millions";
        cout<<endl;
        prevPopulation = population;
        population = population + (population * 0.08);
        increasedPopulation = (population - prevPopulation) * 1000;
    }
}
