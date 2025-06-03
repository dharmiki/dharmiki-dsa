#include<iostream>
using namespace std;

int main(){

    float w,x,y,z;

    cout<<"Enter value of w:";
    cin>>w;

    cout<<"Enter value x:";
    cin>>x;

    cout<<"Enter value y:";
    cin>>y;

    cout<<"Enter value z:";
    cin>>z;

    (w<x)?(w<y)?(w<z)?cout<<"w is min":cout<<"z is min":(y<z)?cout<<"y is min":cout<<"z is min":(x<y)?(x<z)?cout<<"x is min":cout<<"z is min":(y<z)?cout<<"y is min":cout<<"z is min";





}