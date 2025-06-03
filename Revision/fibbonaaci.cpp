#include<iostream>
using namespace std;

int main(){

    int user,f1=-1,f2=1,ans;

    cout<<"Enter Value=";
    cin>>user;

    for (int i = 0; i <user ; i++)
    {

        ans=f1+f2;
        cout<<ans<<"  ";
        f1=f2;
        f2=ans;
        
    }
    
}