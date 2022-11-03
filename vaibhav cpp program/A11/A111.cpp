#include<iostream>
using namespace std;
  
void display(int r){
    cout<<"area of circle ="<<3.14*r*r<<""<<endl;


}
void display(int w, int b){
    cout<<"area of rectangle ="<<w*b<<""<<endl;
}


int main()
{

display(2);
display(20,23);


    return 0;
    
}