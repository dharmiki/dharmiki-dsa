#include<iostream>
using namespace std;

int main()
{

    int sum=0,user;

    cout<<"Enter value::";
    cin>>user;

    for (int i = 1; i <=user; i++)
    {
        sum+=i;
    }

    cout<<"Sum of N num is:"<<sum;
    
}