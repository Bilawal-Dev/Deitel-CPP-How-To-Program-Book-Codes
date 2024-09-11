#include<iostream>
using namespace std;

int main(){
    cout<<endl<<endl;
    for(int i = 1 ; i <= 12 ; i++)
    {
        if(i == 1){
            cout<<"     On The First Day Of Christmas,"<<endl; 
            cout<<"     My True Love Gave To Me"<<endl;
        }           
        if(i >= 12){
            if(i == 12){
                cout<<"     On The Twelved Day Of Christmas,"<<endl;
                cout<<"     My True Love Gave To Me"<<endl;
            }
            cout<<"     Twelve Drummers Drumming,"<<endl;
        }
        if(i >= 11){
            if(i == 11){
                cout<<"     On The Eleventh Day Of Christmas,"<<endl;
                cout<<"     My True Love Gave To Me"<<endl;
            }
            cout<<"     Eleven Pipers Piping,"<<endl;
        }
        if(i >= 10){
            if(i == 10){
                cout<<"     On The Tenth Day Of Christmas,"<<endl;
                cout<<"     My True Love Gave To Me"<<endl;
            }
            cout<<"     Ten Lords A-Leaping"<<endl;
        }
        if(i >= 9){
            if(i == 9){
                cout<<"     On The Ninth Day Of Christmas,"<<endl;
                cout<<"     My True Love Gave To Me"<<endl;
            }
            cout<<"     Nine Ladies Dancing,"<<endl;
        }
        if(i >= 8){
            if(i == 8){
                cout<<"     On The Eight Day Of Christmas,"<<endl;
                cout<<"     My True Love Gave To Me"<<endl;
            }
            cout<<"     Eight Maids A-Milking,"<<endl;
        }
        if(i >= 7){
            if(i == 7){
                cout<<"     On The Seventh Day Of Christmas,"<<endl;
                cout<<"     My True Love Gave To Me"<<endl;
            }
            cout<<"     Seven Swams A-Swimming,"<<endl;
        }
        if(i >= 6){
            if(i == 6){
                cout<<"     On The Sixth Day Of Christmas,"<<endl;
                cout<<"     My True Love Gave To Me"<<endl;
            }
            cout<<"     Six Geese A-Lying,"<<endl;
        }
        if(i >= 5){
            if(i == 5){
                cout<<"     On The Fifth Day Of Christmas,"<<endl;
                cout<<"     My True Love Gave To Me"<<endl;
            }
            cout<<"     Five Golden Rings,"<<endl;
        }
        if(i >= 4){
            if(i == 4){
                cout<<"     On The Fourth Day Of Christmas,"<<endl;
                cout<<"     My True Love Gave To Me"<<endl;
            }
            cout<<"     Four Calling Birds,"<<endl;
        }
        if(i >= 3){
            if(i == 3){
                cout<<"     On The Third Day Of Christmas,"<<endl;
                cout<<"     My True Love Gave To Me"<<endl;
            }
            cout<<"     Three French Hens,"<<endl;
        }
        if(i >= 2){
            if(i == 2){
                cout<<"     On The Second Day Of Christmas,"<<endl;
                cout<<"     My True Love Gave To Me"<<endl;
            }
            cout<<"     Two Turtle Doves,"<<endl;
        }

        cout<<"     And A Partridge In A Pear Tree."<<endl<<endl;
    }
}