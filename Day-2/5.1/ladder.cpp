#include <iostream>
using namespace std;

int main() {
    int num;

    
    cout << "Enter a number: ";
    cin >> num;

    
    if (num == 0) {

        cout << "The number is neutral (zero)." << endl;

    } 
    
    else if (num > 0) {

        cout << "The number is positive." << endl;

    } 

    else {

        cout << "The number is negative." << endl;
        
    }

    
}
