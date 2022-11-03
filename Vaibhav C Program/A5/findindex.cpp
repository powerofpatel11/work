#include<iostream>
using namespace std;
int vaibhav(int arry[],int n,int key){
    int i;
    int last=0;
    int start=0;
    for( i=0;i<n;i++){

        if(arry[i]==key){
            start=i;
            cout<<"frist"<<start<<endl;
            
            
            break;
        
        }
    }
    for(int i=0;i<n;i++){
        if(arry[i]==key){
            // cout<<i<<endl;
            // break;
            last=i;
        }

         

    }
    cout<<"last "<<last<<endl;

}
int main(){

int arry[10]={1,5,4,9,6,5,8,5,5,7}; 
// int count=0;
// int i=0;
// while(arry[i]!=0){
//     count++;
//     i++;


// }
// cout<<"1:"<<arry[0]<<endl;
// cout<<"last:"<<arry[count-1]<<endl;
vaibhav(arry,10,5);


    return 0;
}