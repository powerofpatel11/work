#include<iostream>
using namespace std;
class A{
 string author ;
 string  title;
 float price;
public:
void setdata(){
    cout<<"enter detalis"<<endl;
    cout<<"enter author name"<<endl;
    cin>>author;
    cout<<"enter book tital"<<endl;
    cin>>title;
    cout<<"enter book prince "<<endl;
    cin>>price;
}
void display(){
    cout<<endl;
    cout<<"books author name  = "<<author<<endl;
    cout<<"books name =  "<<title<<endl;
     cout<<"price of books =  "<<price<<  " RS/-"<<endl;
}


};

int main()

{ A a1;
a1.setdata();
a1.display();

    return 0;
}