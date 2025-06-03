#include <iostream>
using namespace std;

int main(){

    int rows, cols;

    
    cout << "Enter the array's row size: ";
    cin >> rows;
    cout << "Enter the array's column size: ";
    cin >> cols;

    int array[rows][cols];

    
    cout << "Enter the array's elements:"<<endl;

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> array[i][j];
        }
    }

    
    cout << "Sum of each row:"<<endl;

    for (int i = 0; i < rows; i++) 
    {
        int rowSum = 0;

        for (int j = 0; j < cols; j++) 
        {
            rowSum += array[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }

    
    cout << "Sum of each column:"<<endl;
    
    for (int j = 0; j < cols; j++) 
    {
        int colSum = 0;
        
        for (int i = 0; i < rows; i++) 
        {
            colSum += array[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum << endl;
    }

}
