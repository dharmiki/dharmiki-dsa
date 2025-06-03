#include<iostream>
using namespace std;

int main()
{

  int user,table;

  cout<<"Enter The Table Value:";
  cin>>user;

  for (int i = 1;i<=10; i++)
  {
    table=user*i;
    cout<<user<<"X"<<i<<"="<<table<<endl;
  }
  

}