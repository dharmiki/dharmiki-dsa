#include<iostream>
using namespace std;

int main(){

    float a,b;

    cout<<"Enter value a:";
    cin>>a;

    cout<<"Enter value b:";
    cin>>b;

    (a==b)?cout<<"value is different":(a<b)? cout<<"a is minium":cout<<"b is maximum";

}