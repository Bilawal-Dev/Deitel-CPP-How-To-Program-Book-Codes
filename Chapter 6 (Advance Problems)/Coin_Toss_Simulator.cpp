#include<iostream>
#include<ctime>
using namespace std;

string coinToss(){
    string coin;
    int cointoss;
    cointoss = rand() % 2;
    if(cointoss == 1)
        return "Head";
    else
        return "Tail";
}

int main(){
    srand(time(0));

    string coinTossResult;
    int Head = 0;
    int Tail = 0;
    for(int i = 1 ; i <= 100 ; i++)
    {
        coinTossResult = coinToss();
        if(coinTossResult == "Head")
            Head++;
        else if(coinTossResult == "Tail")
            Tail++;
    }

    cout<<"The Number Of Times Head Appeared :  "<<Head<<endl;
    cout<<"The Number Of Times Tail Appeared :  "<<Tail<<endl;
}