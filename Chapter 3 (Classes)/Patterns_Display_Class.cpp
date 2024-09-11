#include<iostream>
using namespace std;

class Patterns{
    public :
        void patternA(){
            for(int i = 1 ; i <= 10 ; i++)
            {
                for(int j = 1 ; j <= i ; j++)
                {
                    cout<<"*";
                }
                cout<<endl;
            }
        }
        void patternB(){
            for(int i = 1 ; i <= 10 ; i++)
            {
                for(int j = 10 ; j >= i ; j--)
                {
                    cout<<"*";
                }
                cout<<endl;
            }
        }
        void patternC(){
            for(int i = 1 ; i <= 10 ; i++)
            {
                for(int j = 1 ; j <= i ; j++)
                {
                    cout<<" ";
                }
                for(int j = 10 ; j >= i ; j--)
                {
                    cout<<"*";
                }
                cout<<endl;
            }
        }
        void patternD(){
            for(int i = 0 ; i <= 10 ; i++)
            {
                for(int j = 10 ; j >= i ; j--)
                {
                    cout<<" ";
                }
                for(int j = 1 ; j <= i ; j++)
                {
                    cout<<"*";
                }
                cout<<endl;
            }
        }
};

int main(){
    Patterns Testing;
    Testing.patternA();
    cout<<"\n\n";
    Testing.patternB();
    cout<<"\n\n";
    Testing.patternC();
    cout<<"\n\n";
    Testing.patternD();
    cout<<"\n\n";
}