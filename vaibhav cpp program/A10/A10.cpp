 #include<iostream>
 using namespace std ;
  class SI{
    int p,y;
    float r;
 public :
 SI (int p , float r, int y){
     this->p=p;
     this->r=float (r);

     this->y=y;

 }
SI (int p ,int r, int y){
     this->p=p;
     this->r= r;

     this->y=y;

 }
  void display(){
      cout<<"principle is :"<<p<<" "<<endl;
      cout<<"Rate of intrest is :"<<r<<" "<<endl;
      cout<<"number of years is :"<<y<<" "<<endl;
      

      cout<<"simple intrest  is :"<<(p*r*y)/100<<" "<<endl;
  }


  };




 int main()
 {
   SI k1(4000,20,6);
   k1.display();

   SI k2(2000,(float)2.5,4);
   k2.display();
    

     return 0;
 }