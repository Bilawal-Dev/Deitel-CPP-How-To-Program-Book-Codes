#include<iostream>
using namespace std;

int main(){
    double sales = 1;
    double salary = 0;

    while(true){
        cout<<"Enter Sales In Dollar (-1 To End) :  ";
        cin>>sales;
        if(sales == -1 )
            break;
        salary = 200 + (0.09 * sales);
        cout<<"Salary Is :  $"<<salary<<endl<<endl;
    }
}