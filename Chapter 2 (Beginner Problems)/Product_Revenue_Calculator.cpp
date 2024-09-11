#include<iostream>
using namespace std;

int main(){
    int productNo = 1;
    int quantitySold;
    double revenue = 0;

    cout<<"\n->   Product 1 :  $2.98"<<endl;
    cout<<"->   Product 2 :  $4.50"<<endl;
    cout<<"->   Product 3 :  $9.98"<<endl;
    cout<<"->   Product 4 :  $4.49"<<endl;
    cout<<"->   Product 5 :  $6.87"<<endl<<endl;

    while(true){
        cout<<"Kindly Enter The Product No    :    ";
        cin>>productNo;
        if(productNo <= 0 || productNo > 6)
            break;
        cout<<"Kindly The Quantity Of Product :    ";
        cin>>quantitySold;

        if(productNo == 1){
            revenue = revenue + (2.98 * quantitySold);
        }
        else if(productNo == 2){
            revenue = revenue + (4.50 * quantitySold);
        }
        else if(productNo == 3){
            revenue = revenue + (9.98 * quantitySold);
        }
        else if(productNo == 4){
            revenue = revenue + (4.49 * quantitySold);
        }
        else if(productNo == 5){
            revenue = revenue + (6.87 * quantitySold);
        }
        cout<<endl;
    }

    cout<<"The Total Revenue Generated Is As :      "<<revenue<<endl;
}