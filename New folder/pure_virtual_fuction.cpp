#include<bits/stdc++.h>
using namespace std;
class ankit{
    public:
        void virtual ankits(){
            cout<<"i vir";

        }
     void na(){
        cout<<"iam air";

        }
};
class derived:public ankit {
    public:
    void print(){
        cout<<"derived class";

    }
    void show(){
        cout<<"show dervied class";
    }

};
 int main(){
    ankit *ptr = new ankit
    (*ptr).ankits(1,10);
    (*ptr).na();

 }