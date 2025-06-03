#include <iostream>
using namespace std;

int main() {
    int score;
    char grade;

    cout << "Enter your score: ";
    cin >> score;

    
    if (score <= 100 && score >= 90)
        grade = 'A';
    else if (score < 90 && score >= 80)
        grade = 'B';
    else if (score < 80 && score >= 70)
        grade = 'C';
    else if (score < 70 && score >= 60)
        grade = 'D';
    else if (score < 60 && score >= 50)
        grade = 'E';
    else if (score < 50 && score >= 0)
        grade = 'F';
    else {
        
        cout << "Enter a valid score between 0 and 100.";
        
    }

    
    cout << "Your grade is: " << grade << endl;

    
    switch (grade) {
        case 'A':
            cout << "Excellent work!" << endl;
            break;
        case 'B':
            cout << "Well done!" << endl;
            break;
        case 'C':
            cout << "Good job!" << endl;
            break;
        case 'D':
            cout << "You passed, but you could do better." << endl;
            break;
        case 'E':
            cout << "You need to work harder." << endl;
            break;
        case 'F':
            cout << "Sorry, you failed." << endl;
            break;
        default:
            cout << "Unknown grade." << endl;
            break;
    }

    
}



















