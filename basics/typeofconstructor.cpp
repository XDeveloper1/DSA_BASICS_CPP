#include<bits/stdc++.h>
using namespace std;
class ankit{    
    public:
        int a;
        int b;
    int data(int x ,int y);
    int data2(int z ,int h);

};
int ankit::data(int x, int y){
    x =a;
    y = b;
    cout<<a+b;
return a+b;
}        
int ankit :: data2(int z , int h){
    
    z = a;
    h= b;
    int c ;
    c= z+h;
    cout<<"this is additon: "<<c<<endl;


}
int main(){
    ankit a1;
     cout<<"the data of a1: "<<a1.data(10,50)<<endl;
    a1.data2(10,20);
   
    
}