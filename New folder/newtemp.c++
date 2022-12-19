#include<iostream>
using namespace std;
template<typename T>
void Printdata(T output){
    cout<<output;
}
int main(){
   double d =5.5;
   string s("hello world");
   Printdata(d);
   Printdata(s);
    return 0;
    
}