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
    for (int i = 0; i < 3; i++)
    {
        sum=0;
        for (int j = 0; j < 3; j++)
        {
            cout<<a[i][j]<<" ";
            sum+=a[i][j];
        }
        cout<<"Sum of col is :: "<<sum<<endl;
    }
}