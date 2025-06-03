#include<iostream>
using namespace std;

void vowel(char alphabet)
{

    if (alphabet=='a'||alphabet=='e'||alphabet=='i'||alphabet=='o'||alphabet=='u')
    {
        cout<<"is vowel";
    }
    else
    {
        cout<<"is consonant";
    }
    



}

int main(){

    char alphabet;

    cout<<"Enter The Value::";
    cin>>alphabet;

    vowel(alphabet);


}