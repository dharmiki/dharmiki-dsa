#include<iostream>
using namespace std;

int main(){

    int user;

    cout<<"Enter The Value Of User:";
    cin>>user;

  while (user>0) {

    if (user%2 !=0)//even= if (user%2 ==0)
    {
        
        cout<<user<<endl;
        
    }

     user--;

  }

  
  
    
}