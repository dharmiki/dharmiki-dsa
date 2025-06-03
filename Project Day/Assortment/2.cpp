#include<iostream>
using namespace std;

int main()
{
    int x = 3, y = 3,ans=0; 
    int a[x][y];

    for (int row = 0; row < x; row++)
    {
        for (int col = 0; col < y; col++)
        {
            cout<< "enter the value = ";
            cin>> a[row][col];
        }
        
    }
    for (int row = 0; row < x; row++)
    {
        for (int col = 0; col < y; col++)
        {
           if (ans < a[row][col])
           {
              ans =  a[row][col];
           }
           
        }
        
    }
    cout<< ans;
}
