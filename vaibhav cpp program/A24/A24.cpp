#include<iostream>
using namespace std;

inline int sqeare (int a){
    return a*a;
}
inline int cube  (int a){
    return a*a*a;
}


int main()

{
    int a, b;
    cout<<"  enter the value of sqeare ";
    cin>>a;
    cout<<"enter the value of cube ";
    cin>>b;
 
    cout<<"sqeare of "<<sqeare(a)<<endl;
    cout<<"cube of "<<cube(b)<<endl;

    return 0;
}