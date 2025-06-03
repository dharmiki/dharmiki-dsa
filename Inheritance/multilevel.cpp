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
class c : public b
{
public:
    void hiic()
    {
        cout << "Hello from C class :)" << endl;
    }
};
int main()
{
    c obj;
    obj.hiic();
    obj.hiib();
    obj.hiia();
}