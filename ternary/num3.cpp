#include<iostream>
using namespace std;

int main(){

    float x,y,z;

    cout<<"Enter value x:";
    cin>>x;

    cout<<"Enter value y:";
    cin>>y;

    cout<<"Enter value z:";
    cin>>z;

    (x<y)?(x<z)?cout<<"x is minimum:":cout<<"z is minimum":(y<z)?cout<<"y is minimum":cout<<"z is minimum";

    
    
}