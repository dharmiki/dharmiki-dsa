#include<iostream>
using namespace std;

void prime(int n){

    int count=0;

    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            count=1;
        }
    }

    if (count==1)
    {
        cout<<"Num is not prime";
    }
    else{
        cout<<"Num is prime";
    }
    
    


}

int main(){

    int user;

    cout<<"Enter a Number::";
    cin>>user;

    prime(user);


}