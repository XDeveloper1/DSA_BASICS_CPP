#include<bits/stdc++.h>
using namespace std;
class divide{
 public :

void bhag(float a, float b){
    int c ;
        c= a/b;
        cout<<"division is :: "<<c;

}

};
int main(){
    float x ,y;
    cout<<"enter your first no "<<endl;
    cin>>x;

    cout<<"enter your secanfd no"<<endl;
    cin>>y;
    divide d1;
    d1.bhag(x,y);

}
