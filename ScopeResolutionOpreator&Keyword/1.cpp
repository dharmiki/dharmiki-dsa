#include<iostream>
using namespace std;

int x=10;//global variable

int main(){

    int x=20;

    cout<<::x<<endl;//::scope resolion operator
    cout<<x;

}

