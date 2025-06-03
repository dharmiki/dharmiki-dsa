#include <iostream>
using namespace std;

int main() {

    float FirstValue,SecondValue,ThirdValue,FourthValue;
    
    cout << "Enter value of FirstValue=";
    cin >> FirstValue;
    cout << "Enter value of SecondValue=";
    cin >> SecondValue;
    cout << "Enter value of ThirdValue=";
    cin >> ThirdValue;
    cout << "Enter value of FourthValue=";
    cin >> FourthValue;


    if(FirstValue<SecondValue){
            if(FirstValue<ThirdValue){
                if(FirstValue<FourthValue){
                cout <<"FirstValue is Minimum";
            }
            else{
                cout <<"FourthValue is Minimum";
            } 
        }
        else{
            if (ThirdValue<FourthValue){
                cout <<"ThirdValue is Minimum";
            }
            else{
                cout <<"FourthValue is Minimum";
            } 
        }
    }
    else{
        if(SecondValue<ThirdValue){
            if(SecondValue<FourthValue){
                cout<< "SecondValue is Minimum";
            }
            else{
                cout<<"FourthValue is Minimum";
            }
        }
        else{
            if(ThirdValue<FourthValue){
                cout<<"ThirdValue is Minimum";
            }
            else{
                cout<< "FourthValue is Minimum";
            }
        }
    }

}