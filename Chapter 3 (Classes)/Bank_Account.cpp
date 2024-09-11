#include<iostream>
using namespace std;

class Account{
    private :
        double balance;
        double credit;
        double debit;
    public  :
        Account(){
            balance = 0;
        };

        template<typename Type>
        Account(Type val){
            try{
                if(val >= 0)
                    balance = val;
                else{
                    balance = 0;
                    throw 45;
                }
            }
            catch(int error){
                cout<<"Error "<<error<<" !Please Enter Valid Initial Balance"<<endl;
            }
        }

        template<typename Type>
        void Credit(Type Value ){
            balance = balance + Value;
        }

        void Credit(){
            cout<<"Enter The Amount You Want To Credit To Your Account :    ";
            cin>>credit;
            balance = balance + credit;
        }

        void Debit(){
            cout<<"Enter The Amount You Want To Debit From Your Account  :     ";
            cin>>debit;
            try{
                if(debit <= balance){
                    balance = balance - debit;
                    cout<<"\n";
                    cout<<"->   Amount Withdrawl Successfully!"<<endl;
                    cout<<"->   Amount Withdrawl For Account :   "<<debit<<endl;
                    cout<<"->   Remaining Balance In Account :   "<<balance<<endl;
                    cout<<"\n";
                }
                else
                    throw 65;
            }
            catch(int error){
                cout<<"Error "<<error<<" !Debit Amount Exceeded Account Balance"<<endl;
            }
        }

        template<typename Type>
        void Debit(Type Value){
                if(Value <= balance)
                    balance = balance - Value;
        }


        double getBalance(){
            cout<<"->   The Current Balance In The Account Is :      "<<balance<<endl;
            return balance;
        }
};

int main(){
    cout<<"Bank Account Of User Aslam :     "<<endl;
    Account Aslam;
    Aslam.getBalance();
    Aslam.Credit(200);
    Aslam.getBalance();
    Aslam.Debit(100);
    Aslam.getBalance();
    

    cout<<"\n\nBank Account Of User Zain :     "<<endl;
    Account Zain(1000);
    Zain.getBalance();
    Zain.Debit();
    Zain.Credit();
    Zain.getBalance();
    Zain.Debit(1000);
}