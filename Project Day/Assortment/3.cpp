#include <iostream>
using namespace std;

int main() {

    int n;

    
    cout << "Enter the array's row & column size: ";
    cin >> n;

    int arr[n][n], tranpose[n][n];

    
    cout << "Enter array's elements:"<<endl;

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            tranpose[j][i] = arr[i][j];
        }
    }

    cout << "The transpose matrix of the array:"<<endl;

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout << tranpose[i][j] << " ";
        }
        cout << endl;
    }

}
