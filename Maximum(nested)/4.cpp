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


    if(FirstValue>SecondValue){
            if(FirstValue>ThirdValue){
                if(FirstValue>FourthValue){
                cout <<"FirstValue is Maximum";
            }
            else{
                cout <<"FourthValue is Maximum";
            } 
        }
        else{
            if (ThirdValue>FourthValue){
                cout <<"ThirdValue is Maximum";
            }
            else{
                cout <<"FourthValue is Maximum";
            } 
        }
    }
    else{
        if(SecondValue>ThirdValue){
            if(SecondValue>FourthValue){
                cout<< "SecondValue is Maximum";
            }
            else{
                cout<<"FourthValue is Maximum";
            }
        }
        else{
            if(ThirdValue>FourthValue){
                cout<<"ThirdValue is Maximum";
            }
            else{
                cout<< "FourthValue is Maximum";
            }
        }
    }

}