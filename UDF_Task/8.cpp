#include<iostream>
using namespace std;

int max(int a,int b,int c){

    if (a>b && a>c)
    {
        cout<<"a is max";
    }
    else if (b>a&&b>c)
    {
        cout<<"b is max";
    }
    else
    {
        cout<<"c is max";
    }
    
    
    

}

int main(){

    int a,b,c;

    cout<<"Enter First Value";
    cin>>a;

    cout<<"Enter Second Value";
    cin>>b;

    cout<<"Enter Third Value";
    cin>>c;

    max(a,b,c);



}