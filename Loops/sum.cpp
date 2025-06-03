#include<iostream>
using namespace std;
int main()
{
    int sum=0,userInput;

    cout<<"Enter value :: ";
    cin >> userInput;

    for (int i = 1; i <= userInput; i++)
    {
        sum+=i;
    }
    cout<<"Sum of N number is : "<<sum;

}