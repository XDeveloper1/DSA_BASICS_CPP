#include<bits/stdc++.h>
using namespace std;
class ankit{
    public :
    int a;
    ankit(){
                a=10;

    }

};
class B : public virtual ankit{

};
class c : public virtual ankit{

};
class d : public B,public c{

};
int main(){
    d obj;
    cout<<"A ="<<obj.a<<endl;
    return 0;
}