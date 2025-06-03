#include <iostream>
using namespace std;

int main() {

    int user;

    
    cout << "Enter the array's size: ";
    cin >> user;

    int arr[user];


    cout << "Enter the elements of the array: "<<endl;

    for (int i = 0; i < user; i++) {
        cin >> arr[i];
    }


    cout << "Negative elements in the array are:";

    for (int i = 0; i < user; i++) 
    {
        if (arr[i] < 0) 
        {
            cout << arr[i] << " ";
        }
    }

}