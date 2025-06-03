#include <iostream>
using namespace std;

int main() {
    
    int a[5] = {10, 20, 30, 40, 50};

    
    int  *p[5];

    
    for (int i = 0; i <=4; i++) 
    {
        p[i] = &a[i];
    }

    
    

    for (int i = 0; i <=4; i++) 
    {
        cout << "Values of the pointers:"<<*p[i] << endl;
        cout << "Address of the pointers:"<<&p[i] << endl;
    }

    

}