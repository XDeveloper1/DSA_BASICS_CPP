#include<bits/stdc++.h>
using namespace std;
class A{
    public:
     void data1(){

        cout<<"this is a class"<<endl;

     }
};
class b: public A{
    
public:
    void data2(){
        cout<<"this is class b"<<endl;

    }
};
class c: public b{
    public:
    void data3(){
        cout<<"this is class c"<<endl;
    }
};
int main(){

    c c1;
    c1.data1();
    c1.data2();
    c1.data3();

    return 0;


}