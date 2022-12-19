#include<bits/stdc++.h>
using namespace std;
class A {
    public:
    void display(){
        cout<<"this is  class a"<<endl;
    }
};
class B: public A{
    public:
    void display2(){
        cout<<"this is class b"<<endl;
    }
};
class C: public A{
    public:
    void display3(){
        cout<<"this is class c"<<endl;
    }
};
int main(){
    B b1;
    b1.display2();
    b1.display();

    //new 
    C c1;
    c1.display3();
    c1.display();


}