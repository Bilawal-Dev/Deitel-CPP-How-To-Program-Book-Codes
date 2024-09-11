#include<iostream>
using namespace std;

class Date{
    private : 
        int day;
        int month;
        int year;
        int age;
    public  :
        Date(){
            day = 0;
            month = 0;
            year = 0;
        }
        Date(int x , int y , int z){
            try{
                if(x < 1 || x > 32){
                    day = 0;
                    throw 45;
                }
                if(y < 1 || y > 12){
                    month = 0;
                    throw 45;
                }
                if(z < 1 || z > 3000){
                    year = 0;
                    throw 45;
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
            cout<<"Enter The Day/Month/Year With Space Apart :   ";
            cin>>day>>month>>year;
            if(day < 1 || day > 32)
                day = 0;
            if(month < 1 || month > 12)
                month = 0;
            if(year < 1950 || year > 2024)
                year = 0;
        }
        void getValues(){
            cout<<day<<"/"<<month<<"/"<<year<<endl;
        }
        int getAge(){
            if(year == 0)
                return 0;
            if(year == 2024)
                cout<<"You Are Newly Born! Your Age Is In Months"<<endl;
            return 2024 - year;
        }
};

class HeartRates{
    private :
        string firstName;
        string lastName;
        Date dateOfBirth; 
        static int patientCount;
        int age;
        int maxHeartRate;
        int targetHeartRate;
    public  :
        HeartRates(){
            patientCountFn();
        }
        HeartRates(string firstname , string lastname , Date dateofbirth){
            firstName = firstname;
            lastName = lastname;
            dateOfBirth = dateofbirth;
            age = dateOfBirth.getAge();
            patientCountFn();
            getTargetHeartRate();
        }
        void patientCountFn(){
            patientCount++;
            cout<<"\nPatient Number # "<<patientCount<<endl;
        }
        void setValues(){
            cout<<"\nEnter Your First Name    :   ";
            cin>>firstName;
            cout<<"Enter Your Last Name     :   ";
            cin>>lastName;
            //Entering The Date Of Birth For Which Calling setValues Function() Of Date Class.
            dateOfBirth.setValues();
            age = dateOfBirth.getAge();
            getTargetHeartRate();
        }
        void getValues(){
            cout<<"\nName Of Patient         :    "<<firstName<<" "<<lastName<<endl;
            cout<<"Date Of Birth           :    ";dateOfBirth.getValues();
            if(age == 0){
                cout<<"Age Of Patient          :    --"<<endl;
                cout<<"Maximum Heart Rate      :    --"<<endl;
                cout<<"Target Heart Rate Range :    --"<<endl;
            }
            else{
                cout<<"Age Of Patient          :    "<<age<<" Years"<<endl;
                cout<<"Maximum Heart Rate      :    "<<maxHeartRate<<endl;
                cout<<"Target Heart Rate Range :    "<<targetHeartRate<<endl;
            }

        }
        int getMaximumHeartRate(){
            maxHeartRate = 220 - age;
            return maxHeartRate;
        }
        int getTargetHeartRate(){
            getMaximumHeartRate();
            targetHeartRate = (67.5/100)*maxHeartRate;
            return targetHeartRate;
        }
};

int HeartRates :: patientCount = 0;

int main(){
    Date date(22 , 10 , 2004);
    HeartRates Patient1("Muhammad" , "Bilawal" , date);
    Patient1.getValues();

    cout<<"\n\n";

    HeartRates Patient2;
    Patient2.setValues();
    Patient2.getValues();
}