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

class d : public b, public c
{
public:
    void hiid()
    {
        cout << "Hello from D class :)" << endl;
    }
};

int main()
{
    d objD;

    objD.hiid();

    // objD.helloa();  // ambiguity
    objD.b::hiia(); // Resolving ambiguity
    objD.hiib();
    objD.hiic();
}