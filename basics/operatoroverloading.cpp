#include<bits/stdc++.h>
using namespace std;
class Count{
    private:
    int value;
    public:
    Count():value(5){}
    void operator ++ (){
        ++value;

    }
    void display(){
        cout<<"COunt"<<value<<endl;
    }
    };
    int main(){
        Count c1;
        ++c1;
        c1.display();
        return 0;
    }