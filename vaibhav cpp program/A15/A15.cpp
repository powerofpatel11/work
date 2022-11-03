#include<iostream>
using namespace std;
class  A{
  string a;
  public:
  A(){}
A(string a){
        this->a=a;
    }
 void display(){
     cout<<a<<endl;
 }
A operator+(A obj){
        A temp;
        temp.a = a + obj.a;
        return temp.a;
    }



};


int main()
{

 A a1("vaibhav "), a2("bhanderi ") ;
  A a3=a1+a2;
  a3.display();



    return 0;
}