#include<iostream>
#include<string.h>
using namespace std;
void rev(string str,int n){
    for (int i = 0; i < n; i++) 
    {
        cout << str[n-1-i];
    }
}
int main(){
    string s="hello";
    int n=s.length();
    // cout<<n<<endl;
    rev(s,n);
}