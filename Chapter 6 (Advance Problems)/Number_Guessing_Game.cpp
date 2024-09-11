#include<iostream>
#include<ctime>
using namespace std;


int main(){
    srand(time(0));

    int guessNum = 0;
    int randNum = 1 + rand() % 20;
    bool result = true;
    char againTry;

    while(result)
    {
        system("cls");
        
        cout<<"I Have A Guess Number Between 1 And 20 :    "<<endl;
        cout<<"Can You Guess My Number :    ";
        cin>>guessNum;

        if(guessNum == randNum)
            cout<<"Excellent! You Guessed The Number!"<<endl;
        else if(guessNum < randNum)
            cout<<"Too Low. Try Again"<<endl;
        else if(guessNum > randNum)
            cout<<"Too High. Try Again"<<endl;

        cout<<"\nWould You Like To Play Again (Y Or N) :  ";
        cin>>againTry;

        if(againTry == 'N')
            result = false;
    }

}