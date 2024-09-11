#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

int main(){
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;
    int diceRoll;

    for(int i = 1 ; i <= 6000 ; i++){
        diceRoll = 1 + rand()%6;
        if(diceRoll == 1)
            one++;
        else if(diceRoll == 2)
            two++;
        else if(diceRoll == 3)
            three++;
        else if(diceRoll == 4)
            four++;
        else if(diceRoll == 5)
            five++;
        else if(diceRoll == 6)
            six++;
    }

    cout<<"Ones In Dice  :   "<<one<<endl;
    cout<<"Two In Dice   :   "<<two<<endl;
    cout<<"Three In Dice :   "<<three<<endl;
    cout<<"Four In Dice  :   "<<four<<endl;
    cout<<"Five In Dice  :   "<<five<<endl;
    cout<<"Six In Dice   :   "<<six<<endl;
    cout<<"\nAnd The Last Rolled Dice Was ->    "<<diceRoll<<endl;
}