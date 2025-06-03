#include<iostream>
using namespace std;

void max(int a[]){
    int MaxEl = a[0];
	
    for (int i = 0; i < 5; i++) 
    {
        if (a[i] > MaxEl) 
        {
            MaxEl = a[i];
        }
    }
    cout<<"Maximum vaklue is:: "<<MaxEl;
}

int main(){

    int arr[5]={10,20,30,50,40};
    max(arr);
}