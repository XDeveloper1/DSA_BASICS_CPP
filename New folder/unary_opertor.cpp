#include<bits/stdc++.h>
using namespace std;
class doori{
    public :
    int feet,inch;
    doori(int f, int i){
        this->feet = f;
        this->inch = i;

    }
    void operator -  (){
        feet --;
        inch --;
        cout<<"inches"<<feet<<"'"<<inch;

    }
};

int main(){
    doori d1(8,9);
    -d1;
    return 0;
}