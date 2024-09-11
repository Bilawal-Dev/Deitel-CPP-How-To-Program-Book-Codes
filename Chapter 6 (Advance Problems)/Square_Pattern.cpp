#include<iostream>
#include<iomanip>
using namespace std;

void asterisksSquareFn(int const Side, char const Pattern) {
    cout << endl;
    for(int i = 1; i <= Side; i++) {
        for(int j = 1; j <= Side; j++) {
            cout << Pattern;
        }
        cout << endl;
    }
}

int main() {
    int side;
    char pattern;
    
    cout << "Enter The Side Of The Square You Want To Create: ";
    cin >> side;
    cout << "Enter The Character You Want To Use For The Pattern: ";
    cin >> pattern;

    asterisksSquareFn(side, pattern);

    return 0;
}
