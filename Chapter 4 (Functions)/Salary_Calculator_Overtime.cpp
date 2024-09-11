#include<iostream>
using namespace std;

int main(){
    int hours;
    int extra_hours;
    double hourly_rate;
    double salary;

    while(true)
    {
        cout<<"Enter Hours Worked (-1 To End) :     ";
        cin>>hours;
        if(hours == -1)
            break;
        cout<<"Enter Hourly Rate Of The Employee ($00.00) :     ";
        cin>>hourly_rate;
        if(hours < 0)
            salary = 0;
        else if(hours >= 0 && hours <= 40)
            salary = hourly_rate * hours;
        else{
            extra_hours = hours - 40;
            salary = hourly_rate * 40;
            salary = salary + (extra_hours * hourly_rate * 1.5);
        }
        cout<<"Salary Is $"<<salary<<endl<<endl;
    }
}