#include <iostream>
using namespace std;

class A
{
    public:
        A()
        {
            cout << endl << "A : Constructor ";
        }
        ~A()
        {
            cout << endl << "A : Destructor";
        }
};

class B : public A
{
    public:
        B()
        {
            cout << endl << "B : Constructor ";
        }
        ~B()
        {
            cout << endl << "B : Destructor";
        }
};

class C : public A
{
    public:
        C()
        {
            cout << endl << "C : Constructor ";
        }
        ~C()
        {
            cout << endl << "C : Destructor";
        }
};

class D : public B, public C
{
    public:
        D()
        {
            cout << endl << "D : Constructor";
        }
        ~D()
        {
            cout << endl << "D : Destructor";
        }
};

int main()
{
    D d1;
    return 0;
}
