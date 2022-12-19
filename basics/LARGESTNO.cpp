#include<bits/stdc++.h>
using namespace std;
class largest {
      int a,b,m;
    public:

    void getdata();
    friend void fun_max(largest);  
};
void largest ::getdata(){
    cout<<"enter first number"<<endl;
    cin>>a;
    cout<<"enter secand number"<<endl;
    cin>>b;
}
void fun_max(largest t){
   if(t.a > t.b){
    cout<<"number is is greater"<<t.a<<endl;

   }else{
        cout<<"MAX NUMBER:-"<<t.b;
   }
}
int main(){
    largest l;
    l.getdata();
    fun_max(l);
    return 0;
}
