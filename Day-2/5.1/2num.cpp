#include <iostream>
using namespace std;

int main() {

    int x, y,minValue;

    
    cout << "Enter the first number: ";
    cin >>x;
    cout << "Enter the second number: ";
    cin >>y;

    
    if (x<y) {

        minValue = x;

    } 
    else {

         minValue=y;
        
    }

    
    cout << "The minimum number is: " << minValue << endl;


}
