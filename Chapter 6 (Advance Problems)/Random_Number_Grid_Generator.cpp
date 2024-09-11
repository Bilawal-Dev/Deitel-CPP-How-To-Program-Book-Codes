#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

int main(){
    srand(time(0));
    for(int i = 1 ; i <= 5 ; i++){
        for(int j = 1 ; j <= 5 ; j++){
            cout<<setw(10)<<1 + rand()%6;
        }
        cout<<endl;
    }
}
/*Now, To Avoid Entering Seed Everytime
  We Will Use A Function time(0) Which
  Returns The Current Time(No Of Seconds Since 1970) Of Computer*/