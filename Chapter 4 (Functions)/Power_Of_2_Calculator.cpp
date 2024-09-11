#include<iostream>
using namespace std;

int main(){
    int power;
    cout<<"Enter The Power Of 2 You Want To Find Out :  ";
    cin>>power;

    int dummyPower = power;

    int number = 2;

    int square = 1;

    for( ; dummyPower > 1 ; dummyPower--){
        square = square * number;
    }
    cout<<"The 2 Raised To The Power Of "<<power<<" Is         :  "<<square<<endl;
}