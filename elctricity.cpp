#include<iostream>
using namespace std;
template<typename T>
T elctricity(T z  ){
    if(z>=100){
        cout<<"your charged 6.95 units"<<endl;
       T b=z*6.95;
        cout<<"your wil is:--"<<b<<endl;
    }else{
        if (z<100)
        {
            cout<<"you will charged 5.95"<<endl;
           T b=z*5.95;
            cout<<"your will is:--"<<b<<endl;
        }
        
    }
    return z;
    
};
int main(){
    float x;
    cout<<"enter the value:-";
    cin>>x;
    elctricity(x);
    return 0;

}