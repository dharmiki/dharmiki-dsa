#include <iostream>
using namespace std;

int main() {

    int User, num = 2;

    
    cout << "Enter any number: ";
    cin >> User;

    cout << "Even numbers from 1 to " << User << " are: ";

    
    do {
        if (num % 2 == 0) 
        {
            cout << num << " ";
        }
        num+= 2; 
    } while (num<= User);

}
