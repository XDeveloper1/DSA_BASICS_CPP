#include<bits/stdc++.h>
using namespace std;
class animal{
    int a=10;

    public:
    void eat(int c){
        a =c;
    
        cout<<"i can eat"<<a<<endl;
    }

    void sleep(){
        a++;
        cout<<"i can sleep"<<a<<endl;

    }
};
class dog: public animal{
    int d = 10;

    public:
    void bark(int g){
        g = d;
        g++ +2;
        
        cout<<"i can bark! ladnm asdla"<<g<<endl;

    }
};
int main(){
  dog d1;
  d1.eat(10);
  d1.sleep();
  d1.bark(20);

  return 0;
    
}