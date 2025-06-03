#include<iostream>
using namespace std;

void swap(int n1,int n2){

    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;

    cout<<"Swap value of n1::"<<n1<<endl;
    cout<<"Swap value of n2::"<<n2;


}

int main(){

    int n1,n2;


    cout<<"Enter First Value::";
    cin>>n1;

    cout<<"Enter Second Value::";
    cin>>n2;

    swap(n1,n2);



}