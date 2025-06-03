#include<iostream>
using namespace std;

void oddEven(int num)
{
    if (num!=0)
    {
        cout<<"Odd Value";
    }
    else
    {
        cout<<"Even Value";
    }
    
    
}

int main()
{

    int num;

    cout<<"Enter The Value::";
    cin>>num;

    oddEven(num);

}