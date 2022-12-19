#include<bits/stdc++.h>
using namespace std;
class ankit
{
    public:
    int a;
    ankit(){

        cout<<"this is constructor base class ankit"<<endl;
        a =10;
        cout<<a;

    }
};
class amit : public virtual ankit{

};
class shailly : public virtual ankit{   

};
class vipin : public amit,public shailly{

};
int main(){
   vipin v;
  

}