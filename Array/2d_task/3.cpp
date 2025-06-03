#include<iostream>
using namespace std;
int main(){
    int a[3][3],max;
    cout<<"Enter Matrix :: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    max=a[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(max < a[i][j]){
                max=a[i][j];
            }
        }
    }
    cout<<"Max is :: "<<max;
}