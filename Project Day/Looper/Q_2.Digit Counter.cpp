#include<iostream>
using namespace std;

int main(){

    int userInput,count=0;

    cout<<"Enter Any Number Value::";
    cin>>userInput;

    while (userInput!=0)
    {
        
        userInput=userInput/10;
        count++;

    }

    cout<<"Enter Number Digits::"<<count;
    
}