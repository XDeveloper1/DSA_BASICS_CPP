#include<bits/stdc++.h>
using namespace std;
class mul{
    public:
    void tiply(int a ,int b){
        int c;
        c = a*b;
        cout<<"multiplication is ::-  "<<c;

    }
};
int main(){
    int a ;
    int b;
    cout<<"enter first no :: "<<endl;
    cin>>a;
    cout<<"secand no:: "<<endl;
    cin>>b;
    mul  m1;
    m1.tiply(a,b);
    return 0;
}