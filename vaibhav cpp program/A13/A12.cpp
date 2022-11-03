#include<iostream>
using namespace std;
class calculate{
   int a,b;
public:
calculate(int a, int b  )
{
this->a=a;
this->b=b;
cout<<"adddition of "<<a<<"and "<<b<<"="<<a+b<<""<<endl;
cout<<"adddition of "<<a<<"and "<<b<<"="<<a-b<<""<<endl;
cout<<"adddition of "<<a<<"and "<<b<<"="<<a*b<<""<<endl;
cout<<"adddition of "<<a<<"and "<<b<<"="<<a/b<<""<<endl;
}




};



int main()
{
calculate c1(20,30);


    return 0;
}