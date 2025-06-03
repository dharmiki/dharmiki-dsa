#include <iostream>
using namespace std;

int main() {

    int user;

    
    cout << "Enter the size of the array: ";
    cin >> user;

    int arr[user];

    
    cout << "Enter the elements of the array:"<<endl;

    for (int i = 0; i < user; i++) 
    {
        cout << "a[" << i << "] = ";
        cin >> arr[i];
    }

    
    int MaxEl = arr[0];
	
    for (int i = 0; i < user; i++) 
    {
        if (arr[i] > MaxEl) 
        {
            MaxEl = arr[i];
        }
    }

    
    cout << "The maximum element in the array is: " << MaxEl << endl;

    
}