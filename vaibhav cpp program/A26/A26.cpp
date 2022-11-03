#include<iostream>
using namespace std;
 class B;
 class A{
      
     int x;
     public:
     void setdata1(int x){
         this->x=x;
     }
     friend void display(A s1, B s2);
 };
 class B{

     int y;
     public:
     void setdata2(int y){
         this->y=y;
     }
     friend void display(A s1, B s2);
 };
  void display(A s1, B s2){
      int temp;
      cout<<"before swapping "<<s1.x<<" "<<s2.y<<" ";
      temp=s1.x;
      s1.x=s2.y;
      s2.y=temp;
      cout<<"after swapping "<<s1.x<<" "<<s2.y<<" ";
  }

int main()


{
A a1;
a1.setdata1(20);
B b1;
b1.setdata2(50);
display(a1 ,b1);
    return 0;
}