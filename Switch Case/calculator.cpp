#include<iostream>
using namespace std;

int main(){

    int x,y;
    char z;

    cout<<"Enter a value of x:";
    cin>>x;

    
    cout<<"Enter a value of y:";
    cin>>y;
	
	
    cout<<"Press 1 For +"<<endl;
    cout<<"Press 2 For -"<<endl;
    cout<<"Press 3 For *"<<endl;
    cout<<"Press 4 for /"<<endl;
    cout<<"Press 5 For %"<<endl;

    cout<<"enter the function=";
    cin>>z;

    switch (z)
    {
    case '+':
        cout<<"Addition of X+Y:"<<x+y<<endl;
        break;

    case '-':
        cout<<"Sub of X-Y:"<<x-y<<endl;
        break;

    case '*':
        cout<<"Mul of X*Y:"<<x*y<<endl;
        break;

    case '/':
        cout<<"Div of X/Y:"<<x/y<<endl;
        break;
    
    default:
        cout<<"Invalid";
        break;
    }


}