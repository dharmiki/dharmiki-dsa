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

    cout << "The array in reverse order is:"<<endl;

    for (int i = 0; i < user; i++) 
    {
        cout << "a[" << i << "] = ";
        cout << arr[user-1-i] <<endl;
    }

    


}