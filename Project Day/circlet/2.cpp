#include <iostream>
using namespace std;

int main(){

//11
//12 13
//14 15 16
//17 18 19 20


    int count = 11;

    for (int row = 1; row <= 4; row++) 
    {
        for (int col = 1; col <= row; col++) 
        {
            cout << count << " "; 
            count++;
        }
        cout << endl; 
    }

}