#include<iostream>
using namespace std;

  int main(){

    float maths,science,english,avg;

    
    cout<<"enter your marks maths:";
    cin >> maths;
    cout<<"enter your marks science:";
    cin >> science;
    cout<<"enter your marks english :";
    cin >> english;

    if (maths<0||maths>100||science<0||science>100||english<0||english>100)
    {
      cout<<"Marks should be between 0 and 100";
    }
    else{

          avg=(maths+science+english)/3;
          cout<<"this is your percentage:"<<avg;
      
    }
    
}
