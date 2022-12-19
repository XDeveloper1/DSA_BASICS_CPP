#include<bits/stdc++.h>
using namespace std;
class subtract{
    public:
    int c;
    void sub(int a ,int b){
            c = a-b;
            cout<<"subtaction is :- "<<c;

    }
};
int main(){
    int X;
    int Y;
    subtract obj;
    cout<<"enter number 1:-";
    cin>>X;
    cout<<"enter number 2:- ";
    cin>>Y;
    obj.sub(X,Y);

}