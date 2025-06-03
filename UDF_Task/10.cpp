#include<iostream>
using namespace std;

void power(int num,int pow){

    int sum=num;

    for (int i = 0; i < pow-1; i++)
    {
        sum*=num;
    }
    cout<<sum;
}

int main(){
    power(2,3);
}