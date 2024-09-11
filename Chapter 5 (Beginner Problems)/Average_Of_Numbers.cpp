#include<iostream>
using namespace std;

int main(){
    int count = 1;
    int num;
    int sum = 0;

    cout<<"Enter The Numbers With Space Apart :     "<<endl;

    while(true){
        cin>>num;
        sum = sum + num;
        count++;
        if(num == 9999)
            break;

    }

    cout<<"\n\n->   The Average Of The Numbers Is :      "<<sum/count;
}