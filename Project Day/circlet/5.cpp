#include<iostream>
using namespace std;

int main(){

    //        5
    //      4 5 4
    //    3 4 5 4 3
    //  3 3 4 5 4 3 2 
    //1 2 3 4 5 4 3 2 1

    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>i;j--)
        {
			cout<<" "<<" ";

        }

        for(int k=6-i;k<=5;k++)
        {
			cout<<k<<" ";

        }

        for(int l=4;l>=6-i;l--)
        {
			cout<<l<<" ";

        }
			cout<<endl;

    }

}