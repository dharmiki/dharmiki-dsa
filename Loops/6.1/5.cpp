#include <iostream>
using namespace std;

int main() {

    int FirstYear,SecondYear;
    
    cout << "Enter the first number: ";
    cin >> FirstYear;
    cout << "Enter the second number: ";
    cin >> SecondYear;

    cout << "Leap years between " << FirstYear << " and " << SecondYear << " are: ";

    // While loop find leap years

    while (FirstYear <= SecondYear) 
    {
        if (FirstYear%4==0) 
        {
            cout <<FirstYear<< " ";
        }
        FirstYear++;
    }

    
}
