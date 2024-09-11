#include<iostream>
using namespace std;

int main(){
    int paycode = 0;
    cout<<"\n\nKindly Enter Pay Code Of Employee :     ";
    cin>>paycode;

    double salary = 0;

    cout<<endl<<endl<<endl;

    try{
        if(paycode == 1){
            salary = 30000;
            cout<<"->     The Salary Of Manager Is As       :    PKR "<<salary<<endl;
        }
        else if(paycode == 2){
            int hours;
            double hourly_rate;
            cout<<"->     Kindly Enter The Hours Employee Have Worked :    ";
            cin>>hours;
            cout<<"->     Kindly Enter The Hourly Rate                :    ";
            cin>>hourly_rate;   
            if(hours > 40){
                hours = hours - 40;
                salary = 40 * hourly_rate;
                salary = salary + (1.5 * hourly_rate * hours);
            }
            else if(hours <= 40 && hours > 0){
                salary = hours * hourly_rate;
            }
            cout<<"\n->     The Salary Of Hourly Worker Is As :     PKR "<<salary<<endl;
        }
        else if(paycode == 3){
            double sales;
            cout<<"->     Kindly Enter The Weekly Sales Of The Employee :    ";
            cin>>sales;
            salary = 250 + (0.057 * sales);
            cout<<"\n->     The Salary Of Commission Worker Is As :     PKR "<<salary<<endl;
        }
        else if(paycode == 4){
            int items;
            cout<<"->     Kindly Enter The Number Of Items Produced By The Employee :    ";
            cin>>items;
            salary = 500 * items;
            cout<<"\n->     The Salary Of Piece Worker Is As :     PKR "<<salary<<endl;
        }
        else{
            throw 45;
        }
    }
    catch(int error){
        cout<<"Error "<<error<<"! Please Enter Valid PayCode."<<endl;
        return 0;
    }
}