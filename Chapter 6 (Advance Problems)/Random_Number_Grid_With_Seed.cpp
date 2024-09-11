#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

int main(){
    int seed;
    cout<<"-> Enter Any Random Number :     ";
    cin>>seed;
    srand(seed);

    for(int i = 1 ; i <= 5 ; i++){
        for(int j = 1 ; j <= 5 ; j++){
            cout<<setw(10)<<1 + rand()%6;
        }
        cout<<endl;
    }
}
/*The program produces a different sequence of random numbers 
  each time it executes*/