#include<bits/stdc++.h>
using namespace std;
class a{
    public:
    void add(int a,int b){
        
        cout<<a+b<<endl;
        
    }
    void add(double a, double b){
        
        cout<<a/b<<endl;
    }
};

    
int main(){
  a a1;

    a1.add(10,20);
    a1.add(10.2,20.2);


}
