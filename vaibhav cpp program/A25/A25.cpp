#include <iostream>
using namespace std;
class B;
class A
{
    int x;

public:
    void set1(int x)
    {
        this->x = x;
    }

    friend void display(A o1, B o2);
    
};
class B
{
    int y;

public:
    void set2(int y)
    {
        this->y = y;
    }

    friend void display(A o1, B o2);
    
};
void display(A o1, B o2)
{
    if (o1.x > o2.y)
    {
        cout << o1.x << "is max..." << endl;
    }
    else
    {
        cout << o2.y << "is max...." << endl;
    }
}

int main()
{
    A a;
    a.set1(10);
    B b;
    b.set2(20);

    display(a, b);
    return 0;
}