#include<iostream>
#include<iomanip>
using namespace std;

int numberOfCar = 1;  // Keeps track of the car number for input prompts

// Function to get parking hours for a car
double HoursFn(){
    double Hours = 0.00;
    cout << "Enter the parking hours for car " << numberOfCar << " (0-24): ";
    cin >> Hours;
    numberOfCar++;
    cout << endl;

    // Validate the input hours
    if(Hours < 0 || Hours > 24){
        cout << "Invalid input. Hours should be between 0 and 24." << endl;
        return 0.00;
    } else {
        return Hours;
    }
}

// Function to calculate parking charges based on hours
double ChargesFn(double Hours){
    if(Hours > 0 && Hours <= 3){
        return 2.00;
    } else if(Hours > 3){
        double additionalHours = Hours - 3;
        return 2.00 + (additionalHours * 0.5);
    }
    return 0.00;
}

int main(){
    double carsHours[3] = {0.00, 0.00, 0.00};  // Stores hours for each car
    double carsCharges[3] = {0.00, 0.00, 0.00};  // Stores charges for each car
    double totalHours = 0.00;
    double totalCharges = 0.00;

    // Loop to get hours and calculate charges for each car
    for(int i = 0; i < 3; i++){
        carsHours[i] = HoursFn();
        totalHours += carsHours[i];
        carsCharges[i] = ChargesFn(carsHours[i]);
        totalCharges += carsCharges[i];
    }

    // Clear the screen to display output
    system("cls");

    // Display the results
    cout << setw(5) << "Car" << setw(15) << "Hours" << setw(15) << "Charge" << endl;
    cout << "----------------------------------------" << endl;
    for(int i = 0; i < 3; i++){
        cout << setw(5) << i + 1 << setw(15) << fixed << setprecision(2) << carsHours[i] << setw(15) << fixed << setprecision(2) << carsCharges[i] << endl;
    }
    cout << "----------------------------------------" << endl;
    cout << setw(5) << "Total" << setw(15) << fixed << setprecision(2) << totalHours << setw(15) << fixed << setprecision(2) << totalCharges << endl;   

    return 0;
}
