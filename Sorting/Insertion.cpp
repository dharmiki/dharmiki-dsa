#include<iostream>
using namespace std;

int main(){

    int size;

    cout<<"Enter Array Size::";
    cin>>size;

    for (int i = 0; i <=size; i++)
    {
        cout<<"Enter Array's Value::"<<endl;
        cin>>size;
    }
    

    int array[size];

    for (int i = 1; i < size; i++)
    {
        int target=array[i];
        int x=i-1;
        

        while (x>=0&&array[i]>target)
        {
            array[x+1]=array[x];
            x--;
        }
        array[x + 1] = target;
        
    }

    cout<<"-------------------------------------------------";

    for (int i = 1; i < size; i++)
    {
        cout<<array[i]<<endl;
    }
    
    





}