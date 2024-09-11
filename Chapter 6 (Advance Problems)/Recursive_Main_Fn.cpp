#include<iostream>
using namespace std;


int main(){
    static int count = 5;

    if(count == 0)
        return 0;

    cout<<count<<endl<<endl;

    count--;
    
    main();
}