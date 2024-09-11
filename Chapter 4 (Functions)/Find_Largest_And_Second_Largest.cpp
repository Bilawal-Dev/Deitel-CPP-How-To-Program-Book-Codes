#include<iostream>
using namespace std;

int main(){
    int counter = 1;
    int number;
    int largest = 0;
    int seclargest = 0;

    while(counter <= 10){
        cout<<"Enter A Number :     ";
        cin>>number;
        if(number > largest){
            seclargest = largest;
            largest = number;   
        }
        if(number < largest && number > seclargest)
            seclargest = number;
        counter++;
    }
    
    cout<<"\n\nLargest Number :     "<<largest<<endl;
    cout<<"\n\nLargest Number :     "<<seclargest<<endl;
}