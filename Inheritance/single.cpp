#include <iostream>
using namespace std;

class X
{
public:
    void hiiX()
    {
        cout << "Hello from X class :)" << endl;
    }
};

class Y : public X
{
public:
    void hiiY()
    {
        cout << "Hello from Y class :)" << endl;
    }
};

int main()
{
    Y obj;
    obj.hiiY();
    obj.hiiX();
}
