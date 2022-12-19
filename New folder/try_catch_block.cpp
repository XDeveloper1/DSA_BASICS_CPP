#include<bits/stdc++.h>
using namespace std;
void compute(int a, int b){
    int c;
    if(b==0){
        throw b;
        c=a/b;
        cout<<"result of division :-";
    }

}
void main(){
    int x,y;
    cout<<"enter two nums";
    cin>>x>>y;
   try
   {
   compute(x/y);
   }
   catch(const std::exception& e)
   {
    std::cerr << e.what() << '\n';
   }
   
}