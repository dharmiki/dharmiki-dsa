#include<iostream>
using namespace std;

int main(){

    int a=5;

    int *p1=&a;

    int **p2=&p1;

    cout<<*p1<<endl;
    cout<<**p2;

}
