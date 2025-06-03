//BubbleSort:comapre&swap
//ex:5,4,3,2,1
//compare 1 & 5,so on.
//largest element move to correct position.

#include<iostream>
using namespace std;

int main(){

    int size;
    
    cout<<"Size of Array::";
    cin>>size;

    int a[size],Temp;

    cout<<"Before Swapping Sort::"<<endl<<endl;

    cout<<"----------------------------------------------"<<endl;

    for (int i = 0; i < size; i++)
    {
        cout<<"a["<<i<<"] : "; 
        cout<<a[i]; 
    }

    
    
}