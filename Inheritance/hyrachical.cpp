#include <iostream>
using namespace std;

class a
{
public:
    void hiia()
    {
        cout << "Hello from A class :)" << endl;
    }
};

class b : public a
{
public:
    void hiib()
    {
        cout << "Hello from B class :)" << endl;
    }
};

class c : public a
{
public:
    void hiic()
    {
        cout << "Hello from C class :)" << endl;
    }
};

int main()
{
    b objB;
    c objC;

    cout << "Calling functions using Object of B:" << endl;
    objB.hiia();
    objB.hiib();

    cout << "\nCalling functions using Object of C:" << endl;
    objC.hiia();
    objC.hiic();

    
}