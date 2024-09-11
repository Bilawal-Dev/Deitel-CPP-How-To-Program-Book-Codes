#include<iostream>
using namespace std;

int main(){
    double miles;
    double gallons;
    double total_miles = 0;
    double total_gallons = 0;
    double milesPerGallon;
    double totalmilesPerGallon = 0;

    while(true){
        cout<<"Enter Miles Driven (-1 to Quit) :    ";
        cin>>miles;
        if(miles == -1)
            break;
        cout<<"Enter The Gallons Used          :    ";
        cin>>gallons;

        total_miles   = total_miles   + miles;
        total_gallons = total_gallons + gallons;

        milesPerGallon = miles / gallons;
        cout<<"MPG This Tankful                :    "<<milesPerGallon<<endl;

        totalmilesPerGallon = (total_miles / total_gallons );

        cout<<"Total MPG                       :    "<<totalmilesPerGallon<<endl;
        cout<<"\n\n";
    }

}