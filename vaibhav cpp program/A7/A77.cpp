#include <iostream>
using namespace std;
class A{
    string teacher;
    string subject;
    string cource;
    int no;
    public:
    void setdata(){
        cout<<"enter teacher name "<<endl;
        cin>>teacher;
        cout<<"enter your subject name :"<<endl;
        cin>>subject;
       cout<<"enter your cource name :"<<endl;
       cin>>cource;
       cout<<"enter number of lecturers"<<endl;
       cin>>no;

        
    }
    void display (){
        cout<<endl;
        cout<<"class detailes"<<endl;
        cout<<"your subject name :"<<subject<<endl;
        cout<<"your teacher name :"<<teacher<<endl;
        cout<<"your cource name :"<<cource<<endl;
        cout<<"number of lecturers  :"<<no<<endl;

    }

};






int main()
{ 
    A a1[5];
 for(int i=1; i<=5; i++)
    a1[i].setdata();
 for(int i=1; i<=5; i++)
    a1[i].display();
    return 0;
}