#include <iostream>
using namespace std;

int main() {

    int size;
    float sum = 0, average;

    
    cout << "Enter array size: ";
    cin >> size;

    int arr[size];

    cout << "Enter array elements:"<<endl;

    for (int i = 0; i < size; i++) 
    {
        cout << "a[" << i << "] = ";
        cin >> arr[i];

        sum += arr[i]; 
    }

    
    average = sum / size;

    
    cout << "Average of the array: " << average << endl;


}
