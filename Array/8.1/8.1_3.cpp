#include <iostream>
using namespace std;

int main() {
    
    int n; 

    cout << "Enter array size: ";
    cin >> n;

    
    int A[n], B[n], C[n];

    
    cout << "Enter array A's elements:"<<endl;

    for (int i = 0; i < n; i++) 
    {
        cout << "a[" << i << "] = ";
        cin >> A[i];
    }

  
    cout << "Enter array B's elements:"<<endl;
    for (int i = 0; i < n; i++)
     {
        cout << "b[" << i << "] = ";
        cin >> B[i];
    }

    
    for (int i = 0; i < n; i++) 
    {
        C[i] = A[i] + B[i];
    }


    cout << "Array C is: ";

    for (int i = 0; i < n; i++) 
    {
        cout << C[i] << " ";
    }
    
    cout << endl;


}
