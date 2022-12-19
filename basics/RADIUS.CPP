#include<bits/stdc++.h>
using namespace std;
class rad{
    private:
    double radius;
    public:
    void radiuss(double r){
        radius = r;
        double area = 3.14*radius*radius;
        cout<<"radius is :" <<radius<<endl;
        cout<<"Area is : "<<area<<endl;


    }
};
int main(){
    rad r1;
    r1.radiuss(1.5);
}