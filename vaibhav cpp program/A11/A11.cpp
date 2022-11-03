#include <iostream>
using namespace std;
class Area
{
    int W, L, R;

public:
    Area()
    {
        // cout<<"I am default constructor"<<endl;
    }

    Area(int R)
    {
        this->R = R;
        cout << "The area of circle =" << 3.14 * R * R << "";
    }
    Area(int W, int L)
    {
        this->W = W;
        this->L = L;
        cout << " The area of RECTANGLE =" << W * L << "";
    }
    // Area(int W, int L)
    // {
    //     this->W = W;
    //     this->L = L;
    //     cout << " The area of triANGLE =" << .5 * W * L << "";
    // }
};

int main()
{
    // Area a1(5);
    Area a1(20,30);

    return 0;
}