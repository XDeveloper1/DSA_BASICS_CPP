#include<bits/stdc++.h>


using namespace std;
class A{
    public:
    void kacahaek(){
        cout<<"this class a"<<endl;
    }
};
class B{
        public:
        void kakchadoo(){
            cout<<"this class b"<<endl;

        }
};
class C: public B,public A{
        public:
        void accessing_all_members(){
            cout<<"access successfully";


        }
};
int main(){
    C c1;
    c1.kacahaek();
    c1.kakchadoo();
    c1.accessing_all_members();
}