#include<bits/stdc++.h>
using namespace std;
class ankit {
    int a = 10;
    int b =20;
        public:
        ankit(){
            cout<<"this is contrtuctor"<<endl;
        }
      void  friend fun_max(ankit);
};
 main(){
    ankit a;
    fun_max(a);

}
void fun_max(ankit a){
    cout<<a.b<<" <-:finally"<<endl;

}