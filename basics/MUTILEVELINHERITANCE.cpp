#include<bits/stdc++.h>
using namespace std;
class first {
    public:
    char a;
    int regno;
    int rollno;
    char name ;
    void  getinfo(){
    cout<<"enter your Name"<<endl;
    cin>>a;
    
    cout<<"enter your regno"<<endl;
    cin>>regno;
        cout<<a;
       cout<<regno;
    }
   

};
class secand:public first {
    // public:
    // int m1,m2,m3,m4,m5;
    // int total;
    // void marks(){
    // cout<<"enter marks sub 1"<<endl;
    // cin>>m1;
    // cout<<"enter marks sub 2"<<endl;
    // cin>>m2;
    // cout<<"enter marks sub 3"<<endl;
    // cin>>m3;
    // cout<<"enter marks sub 4"<<endl;
    // cin>>m4;
    // cout<<"enter marks sub 5"<<endl;
    // cin>>m5;
    // total = m1+m2+m3+m4+m5;
    // cout<<"total is :"<<total;
    // }
};
class third:public secand{
    // public:
    // float d;
    // float f;

    // void display(){
    //     d =total/500;
    //     cout<<"divisor is "<<d;
    //     f = d/100;
    //     cout<<"percentage"<<f<<"%";

    // }

};
int main(){
    first f;
    f.getinfo();
    
}

