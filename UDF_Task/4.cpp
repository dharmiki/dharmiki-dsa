#include<iostream>
using namespace std;

int fact(int user)
{

    if (user<=1)
    {
        return 1;
    }
    else
    {
        return user * fact(user-1);
    }
    
    


}

int main()
{

    int user;

    cout<<"Enter The Value::";
    cin>>user;


    cout<<"Factorial is::"<<fact(user);

}