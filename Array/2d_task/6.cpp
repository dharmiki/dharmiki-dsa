#include<iostream>
using namespace std;

int main()
{
    int size;
    
    cout << "Enter a row & col size: ";
    cin >> size;
    
    int a1[size][size];
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            cout << "a[" << row << "][" << col << "] = ";
            cin >> a1[row][col];
        }
    }
    
    int a2[size][size];
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            cout << "a2[" << row << "][" << col << "] = ";
            cin >> a2[row][col];
        }
    }
    
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            cout << a1[row][col] << " ";
        }
        cout << endl;
    }
    
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            cout << a2[row][col] << " ";
        }
        cout << endl;
    }
    
    int sum[size][size];

    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            sum[row][col] = a1[row][col] + a2[row][col];
            cout << sum[row][col] << " ";
        }
        cout << endl;
    }
}