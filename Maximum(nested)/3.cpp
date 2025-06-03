#include<iostream>
using namespace std;

int main(){

    float FirstValue,SecondValue,ThirdValue;

    cout<<"Enter The Value of FirstValue :";
    cin>>FirstValue;

    cout<<"Enter The Value of SecondValue :";
    cin>>SecondValue;

    cout<<"Enter The Value of ThirdValue :";
    cin>>ThirdValue;

    if (FirstValue>SecondValue){

        if (FirstValue>ThirdValue)
        {
            cout<<"FirstValue is Maximum";
        }
        else{

            cout<<"ThirdValue is Maximum";

        }
        
    }

    else{

        if (SecondValue>ThirdValue)
        {
            cout<<"SecondValue is Maximum";
        }
        else{
            cout<<"ThirdValue is Maximum";
        }
        

    }
    
}