#include <iostream>

using namespace std;

void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        // Base case: Only one disk to move
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    // Move n-1 disks from source to auxiliary peg
    towerOfHanoi(n - 1, source, auxiliary, destination);
    
    // Move the nth disk from source to destination peg
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    
    // Move the n-1 disks from auxiliary to destination peg
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int n; // Number of disks
    cout << "Enter the number of disks: ";
    cin >> n;
    
    cout << "Moves required to solve the Tower of Hanoi problem:" << endl;
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B, and C are the names of the pegs
    
    return 0;
}
