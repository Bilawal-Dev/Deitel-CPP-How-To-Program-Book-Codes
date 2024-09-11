#include<iostream>
using namespace std;

class DiamondPattern{
    private :
        int width;
    public  :
        DiamondPattern() : width(10){};

        void setWidth(){
            cout<<"\n\n";
            cout<<"Enter The Width Of Diamond :     ";
            cin>>width;
        }

        void drawDiamondFn()
        {
            cout<<"\n\n";
            
            for(int i = 1 ; i <= width ; i++)
            {
                for(int j = width ; j >= i ; j--)
                {
                    cout<<" ";
                }
                for(int k = 1 ; k <= i ; k++)
                {
                    cout<<"*";
                }
                for(int l = 2 ; l <= i ; l++)
                {
                    cout<<"*";
                }
                cout<<endl;
            }

            for(int i = 1 ; i <= (width - 1) ; i++)
            {
                for(int j = 0 ; j <= i ; j++)
            {
                cout<<" ";
            }
            for(int k = (width - 1) ; k >= i ; k--)
            {
                cout<<"*";
            }
            for(int l = (width - 2) ; l >= i ; l--)
            {
                cout<<"*";
            }
            cout<<endl;
            }
        }
};

int main(){
    DiamondPattern TestingObject;
    TestingObject.drawDiamondFn();
    TestingObject.setWidth();
    TestingObject.drawDiamondFn();
}