#include<iostream>
using namespace std;
int main(){
    int a[3][3],sum=0;
    cout<<"Enter Matrix :: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    int num;
    cout<<"Enter num to search ::";
    cin >> num;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (num == a[i][j])
            {
                cout<<"Element found at a["<<i<<"]["<<j<<"]";
            }
            
        }
    }
}