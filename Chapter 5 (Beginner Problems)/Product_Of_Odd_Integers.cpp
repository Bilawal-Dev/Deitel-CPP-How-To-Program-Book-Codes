#include<iostream>
using namespace std;

int main(){
    int product = 1;

    for(int i = 1 ; i <= 15 ; i++){
        if(i % 2 != 0)
            product = product * i;
    }

    cout<<"The Product Of Odd Integers From 1 To 15 Is :    "<<product;
}
