#include<iostream>
using namespace std;

class Date{
    private :
        int day;
        int month;
        int year;
    public  :
        Date(){
            day = 0;
            month = 0;
            year = 0;
        }
        Date(int x , int y , int z){
            try{
                if((x < 1 && x > 32) || (y < 1 && y > 12) || (z < 1 && z > 3000))
                {
                    throw 45;
                    day = 0;
                    month = 0;
                    year = 0;
                }
                day = x;
                month = y;
                year = z; 
            }
            catch(int error){
                cout<<"Error "<<error<<" ! You Entered Invalid Values Of Date"<<endl;
            }
        }
        void setValues(){
            cout<<"Enter The Day   :    ";
            cin>>day;
            if(day < 1 && day > 32)
                day = 0;
            cout<<"Enter The Month :    ";
            cin>>month;
            if(month < 1 && month > 12)
                month = 0;
            cout<<"Enter The Year  :    ";
            cin>>year;
            if(year < 1 && year > 3000)
                year = 0;
        }
        void getValues(){
            cout<<"\n";
            cout<<"->   "<<day<<"/"<<month<<"/"<<year<<endl;
            cout<<"\n";
        }
};

int main(){
    Date Birthday;
    Birthday.getValues();
    Birthday.setValues();
    Birthday.getValues();
}