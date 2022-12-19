#include<bits/stdc++.h>
using namespace std;
class calculator{
        // public:
        void add(int a ,int b){
            int c ;
            c= a+b;
            cout<<"additon is ::  "<<c;

        }
         void subtraction(int a ,int b){
            int c ;
            c= a-b;
            cout<<"subtraction is ::  "<<c;
            
        }
           void multiply(int a ,int b){
            int c ;
            c= a*b;
            cout<<"multiply is ::  "<<c;
            
        }
           void divide(float a ,float b){
            int c ;
            c= a/b;
            cout<<"divide is ::  "<<c;
            
        }
        
};
int main(){
    int a;
    cout<<"1: add"<<endl<<"2: subtraction "<<endl<<"3: multiply "<<endl<<"4: divide"<<endl;
    cin>>a;
     cout<<"enter first value & secand also";
    int x,y;
     cin>>x>>y;
     calculator c1;
    switch (a)
    {
    case 1:
        c1.add(x,y);
        break;
         case 2:
        c1.subtraction(x,y);
        break;
         case 3:
        calculator c1;
     
        c1.multiply(x,y);
        break;
         case 4:
        c1.divide(x,y);
        break;
    default:
            cout<<"please enter correct no";
        break;
    }

}