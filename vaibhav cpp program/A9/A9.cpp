#include <iostream>
using namespace std;
class A
{
    int a, b;

public:
    A(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void calculate (){
        cout<<"additional of"  <<a<<"  and " <<b<<" : = "<<a+b<<" "<<endl;
        cout<<"subtraction  of"  <<a<<"  and "<<b<<" : = "<<a-b<<" "<<endl;
        cout<<"multipication of"  <<a<<"  and "<<b<<" : = "<<a*b<<" "<<endl;
        cout<<"division of"  <<a<<"  and "<<b<<" : = "<<a/b<<" "<<endl;
        
        
        
        
    }
};

int main()
{ A a1(20,30);
 a1.calculate();
    
    return 0;
}