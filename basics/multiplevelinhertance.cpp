#include<bits/stdc++.h>
using namespace std;
class ankit{
    int a;
    public:
    int public_A =10;
    void fun(){
        cout<<"this is me "<<endl;
        cin>>a ;
        

    }
int friend dost(ankit);
};
class amit:public ankit{
    public:
   amit(){
    int b;
     cout<<"enter the value of a again"<<endl;
    cin>>b;
   }

    

};
class rohit:public amit{
    rohit(){
        int c;
        cout<<"this is rohit";
        cin>>c;
    }

};
int main(){
    rohit 



}