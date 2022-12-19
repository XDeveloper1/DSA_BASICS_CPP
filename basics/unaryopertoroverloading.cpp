#include<bits/stdc++.h>
using namespace std;
class ankit{
    int a,b,c;
    public:
    void test(int x,int y,int z) ;
    void operator -(); 
   
    void display();
};
void ankit ::test(int x,int y , int z){
    a=x;
    b=y;
    c=z;

}
void ankit ::operator-(){
    a= -a;
    b = -b;
    c = - c;

}
void ankit::display(){
    cout<<"value of a:- "<<a<<endl;
    cout<<"value of b:- "<<b<<endl;
    cout<<"value of c:- "<<c<<endl;
}
int main(){
    ankit a1;
    a1.test(-10,20,30);
    a1.display();
    -a1;
    a1.display();
}