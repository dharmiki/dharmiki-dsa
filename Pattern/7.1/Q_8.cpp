#include <iostream>
using namespace std;

int main()

//1
//2 3
//4 5 6
//7 8 9 10
//11 12 13 14 15

{   
    int count = 1;

    for (int row = 1; row <= 5 ; row++)
    {
        for (int col = row; col >= 1; col--)
        {
            cout << count << " ";
            count ++;
        }
        cout << endl;
    }

    
}