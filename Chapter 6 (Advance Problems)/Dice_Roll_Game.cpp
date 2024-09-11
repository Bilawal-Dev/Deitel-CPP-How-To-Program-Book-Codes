#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

int main(){
    int diceOne , diceTwo;
    char playerTurn;
    int noOfTries = 0;
    int sum = 0;
    bool checkVar = true;
    int myPoints = 0;

    while(checkVar){
        noOfTries++;

        cout<<"->   Enter Any Key To Roll The 2 Dices  :     ";
        cin>>playerTurn;
        
        srand(time(0));
        diceOne = 1 + rand()%6;
        srand(time(0));
        diceTwo = 1 + rand()%6;

        sum = diceOne + diceTwo;

        cout<<setw(20)<<"Dice One     : "<<diceOne<<endl;
        cout<<setw(20)<<"Dice Two     : "<<diceTwo<<endl;
        cout<<setw(20)<<"Sum Of Dices : "<<sum<<endl<<endl;


        if(noOfTries == 1)
        {
            if(sum == 7 || sum == 11){
                cout<<endl<<endl<<"    Congratulations Player Wins!!!"<<endl;
                checkVar = false;
            }
            else if(sum == 2 || sum == 3 || sum == 12){
                cout<<endl<<endl<<"    Player Loses And The Casino House Won!!!"<<endl;
                checkVar = false;
            }
            else{
                myPoints = sum;
                cout<<setw(20)<<"User Points =>  "<<myPoints<<endl;
                cout<<"\t\t\t\t\t\tMatch The Sum Of 2 Dices To Win The Game"<<endl<<endl;
            }
        }
        else{
            if(sum == 7){
                cout<<endl<<setw(20)<<"    Player Loses And The Casino House Won!!!"<<endl;
                checkVar = false;
            }
            else if(sum == myPoints){
                cout<<endl<<setw(20)<<"    Congratulations Player Wins!!!"<<endl;
                checkVar = false;
            }
        }
    };

}