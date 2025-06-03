#include<iostream>
using namespace std;

int main(){

    float a,b,c,d,e,f;

    cout<<"Enter The value of a:";
    cin>>a;

    cout<<"Enter The value of b:";
    cin>>b;

    cout<<"Enter The value of c:";
    cin>>c;

    cout<<"Enter The value of d:";
    cin>>d;

    cout<<"Enter The value of e:";
    cin>>e;

    cout<<"Enter The value of f:";
    cin>>f;


       if (a > b) 
       {
        if (a > c) 
        {
            if (a > d) 
            {
                if (a > e) 
                {
                    if (a > f) 
                    {
                        cout << "A is max";
                    } else {
                        cout << "F is max";
                    }
                } else {
                    if (e > f) 
                    {
                        cout << "E is max";
                    } else {
                        cout << "F is max";
                    }
                }
            } else {
                if (d > e) 
                {
                    if (d > f) 
                    {
                        cout << "D is max";
                    } else 
                    {
                        cout << "F is max";
                    }
                } else 
                {
                    if (e > f) 
                    {
                        cout << "E is max";
                    } else 
                    {
                        cout << "F is max";
                    }
                }
            }
        } else 
        {
            if (c > d) 
            {
                if (c > e) 
                {
                    if (c > f) 
                    {
                        cout << "C is max";
                    } else {
                        cout << "F is max";
                    }
                } else 
                {
                    if (e > f) 
                    {
                        cout << "E is max";
                    } else 
                    {
                        cout << "F is max";
                    }
                }
            } else 
            {
                if (d > e) 
                {
                    if (d > f) 
                    {
                        cout << "D is max";
                    } else 
                    {
                        cout << "F is max";
                    }
                } else 
                {
                    if (e > f) 
                    {
                        cout << "E is max";
                    } else 
                    {
                        cout << "F is max";
                    }
                }
            }
        }
    } else 
    {
        if (b > c) 
        {
            if (b > d) 
            {
                if (b > e) 
                {
                    if (b > f) 
                    {
                        cout << "B is max";
                    } else 
                    {
                        cout << "F is max";
                    }
                } else 
                {
                    if (e > f) 
                    {
                        cout << "E is max";
                    } else {
                        cout << "F is max";
                    }
                }
            } else 
            {
                if (d > e) 
                {
                    if (d > f) 
                    {
                        cout << "D is max";
                    } else {
                        cout << "F is max";
                    }
                } else 
                {
                    if (e > f) 
                    {
                        cout << "E is max";
                    } else 
                    {
                        cout << "F is max";
                    }
                }
            }
        } else 
        {
            if (c > d) 
            {
                if (c > e) 
                {
                    if (c > f) 
                    {
                        cout << "C is max";
                    } else 
                    {
                        cout << "F is max";
                    }
                }
                 else 
                 {
                    if (e > f) 
                    {
                        cout << "E is max";
                    } else 
                    {
                        cout << "F is max";
                    }
                }
            } else 
            {
                if (d > e) 
                {
                    if (d > f) 
                    {
                        cout << "D is max";
                    } else 
                    {
                        cout << "F is max";
                    }
                } else 
                {
                    if (e > f) 
                    {
                        cout << "E is max";
                    } else 
                    {
                        cout << "F is max";
                    }
                }
            }
        }
    }

    
}