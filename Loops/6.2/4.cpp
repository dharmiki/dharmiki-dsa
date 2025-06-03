#include<iostream>
using namespace std;

int main(){

    int User,f1=-1,f2=1,ans;

    cout<<"Enter The Value=";
    cin>>User;
    
    for (int i = 0; i<User; i++)
    {
        
        ans=f1+f2;
        cout<<ans<<"  ";
        f1=f2;
        f2=ans;

    }
    
}