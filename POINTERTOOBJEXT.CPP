#include<iostream>
using namespace std;
class Complex{
        int real,imagenery ;
        public:
        void getdata(){
            cout<<"the real="<<real<<endl;
            cout<<"the imagenery="<<imagenery<<endl;

        }

    void setdata(int a, int b){
        a = real;
        b= imagenery;

    }


};
 int main(){

    Complex *ptr = new Complex;
    (*ptr).setdata(1,20);
    (*ptr).getdata();

 }
