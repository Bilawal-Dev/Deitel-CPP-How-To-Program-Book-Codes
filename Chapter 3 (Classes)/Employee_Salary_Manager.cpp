#include<iostream>
using namespace std;

class Employee{
    private :
        static int count;
        string firstName;
        string lastName;
        double salary;
    public  :
        Employee(){
            count++;
            cout<<"->   Employee No #"<<count<<endl;
            firstName = "********";
            lastName  = "********";
            salary    = 00.00;
        }
        void setFn(){
            cout<<"Enter Your First Name         :  ";
            cin>>firstName;
            cout<<"Enter Your Last Name          :  ";
            cin>>lastName;
            try{
                cout<<"Enter Your Monthly Salary     :  ";
                cin>>salary;
                if(salary < 0){
                    salary = 00.00;
                    throw 45;
                }
            }
            catch(int error){
                cout<<"Error "<<error<<"! Please Enter Valid Salary"<<endl;
            }
        }
        
        void raiseSalary(double Value){
            if(Value > 0)
                salary = salary + ((Value / 100) * salary);
        }

        void getFn(){
            cout<<"\n\n";
            cout<<"Employee Full   Name   :  "<<firstName<<" "<<lastName<<endl;
            cout<<"Employee Yearly Salary :  "<<salary*12<<endl;
        }
};

int Employee :: count = 0;

int main(){
    Employee Aslam;
    Aslam.setFn();
    Aslam.getFn();  //It Type Casts The Integer 10 To Double Value 10.00 So That It Catches The Fn With Double Parameter
    Aslam.raiseSalary(static_cast<double>(10));
    Aslam.getFn();

    cout<<"\n\n";
    Employee Zafar;
    Zafar.setFn();
    Zafar.getFn();
}