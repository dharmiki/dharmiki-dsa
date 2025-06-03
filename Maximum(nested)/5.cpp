#include<iostream>
using namespace std;

int main(){

    float a,b,c,d,e;

    cout<<"Enter a Value of A:";
    cin>>a;

    
    cout<<"Enter a Value of B:";
    cin>>b;

    
    cout<<"Enter a Value of C:";
    cin>>c;

    
    cout<<"Enter a Value of D:";
    cin>>d;

    
    cout<<"Enter a Value of E:";
    cin>>e;


    if(a>b){
        if(a>c){
            if(a>d){
                if(a>e){
                    cout<<"d is max";
                }
                else{
                    cout<<"e is max";
                }
            }
            else{
                if(d>e){
                    cout<<"d is max";
                }
                else{
                    cout<<"e is max";
                }
            }
        }
        else{
            if(c>d){
                if(c>e){
                    cout<<"c is max";
                }
                else{
                    cout<<"e is max";
                }
            }
            else{
               if(d>e){
                    cout<<"d is max";
               } 
               else{
                    cout<<"e is max";
               }
            }
        }
    }
    else{
        if(b>c){
            if(b>d){
                if(b>e){
                    cout<<"b is max";
                }
                else{
                    cout<<"e is max";
                }
            }
            else{
                if(d>e){
                    cout<<"d is max";
                }
                else{
                    cout<<"e is max";
                }
            }
        }
        else{
            if(c>d){
                if(c>e){
                    cout<<"c is max";
                }
                else{
                    cout<<"e is max";
                }
            }
            else{
                if(d>e){
                    cout<<"d is max";
                }
                else{
                    cout<<"e is max";
                }
            }
        }
    }
}