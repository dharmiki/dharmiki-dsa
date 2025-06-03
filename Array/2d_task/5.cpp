#include<iostream>
using namespace std;

int main()
{
    int size,value = 0;
    
    cout << "Enter a row & col size: ";
    cin >> size;
    
    int a[size][size];
    for (int row = 0; row < size; row++) 
    {
        for (int col = 0; col < size; col++) 
        {
            cout << "a[" << row << "][" << col << "] = ";
            cin >> a[row][col];
        }
    }
    for (int row = 0; row < size; row++) 
    {
        for (int col = 0; col < size; col++) 
        {
            cout << a[col][row] << " ";
        }
        cout << endl;
    }
}