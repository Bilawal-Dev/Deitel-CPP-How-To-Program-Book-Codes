#include<iostream>
using namespace std;

int main(){
    int counter = 1;
    int number;
    int largest = 0;

    while(counter <= 10){
        cout<<"Enter A Number :     ";
        cin>>number;
        if(number > largest)
            largest = number;   
        counter++;
    }
    
    cout<<"\n\nLargest Number :     "<<largest<<endl;
}