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

    if (FirstValue<SecondValue){

        if (FirstValue<ThirdValue)
        {
            cout<<"FirstValue is Minimum";
        }
        else{

            cout<<"ThirdValue is Minimum";

        }
        
    }

    else{

        if (SecondValue<ThirdValue)
        {
            cout<<"SecondValue is Minimum";
        }
        else{
            cout<<"ThirdValue is Minimum";
        }
        

    }
    
}