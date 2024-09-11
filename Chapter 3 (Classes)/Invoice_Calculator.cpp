#include<iostream>
using namespace std;

class Invoice {
    private :
        string invoice_No;
        string description;
        int quantity;
        double price;
        double invoice_amount;
    public  :
        Invoice(){
            invoice_No  = "####-####-####";
            description = "--------------------------------------------------------";
            quantity = 0;
            price = 0.00;
            invoice_amount = 0.00;
        }

        void setFn(){
            cout<<"Enter The Invoice Number         :   ";
            cin>>invoice_No;
            cin.ignore();   //Ignores The New Line Character Left In The Buffer
            cout<<"Enter The Description Of Product :   ";
            getline(cin , description); //Through This We Can Enter The Whole Description Bcz cin Can Only Take A Single Word
            try{
                cout<<"Enter The Quantity Of Product    :   ";
                cin>>quantity;
                if(quantity < 0 )
                    throw 45;
                cout<<"Enter The Price OF Product       :   ";
                cin>>price;
                if(price < 0)
                    throw 65;
            }
            catch(int error){
                cout<<"Error "<<error<<" ! Please Enter Valid Quantity And Price"<<endl;
            }
        }

        void getFn(){
            cout<<"\n\n";
            cout<<"Invoice Number                   :     "<<invoice_No<<endl;
            cout<<"Product Description              :     "<<description<<endl;
            cout<<"Product Quantity                 :     "<<quantity<<endl;
            cout<<"Product Price                    :     "<<price<<endl;
        }

        double getInvoiceAmount(){
            invoice_amount = quantity * price;
            cout<<"The Total Invoice Amount Is As   :     "<<invoice_amount<<endl;
            return invoice_amount;
        }
};

int main(){
    Invoice Laptop;
    Laptop.setFn();
    Laptop.getFn();
    double Amount = Laptop.getInvoiceAmount();
}