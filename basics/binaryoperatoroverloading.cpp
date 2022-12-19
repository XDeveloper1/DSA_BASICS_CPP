 #include<bits/stdc++.h>
 using namespace std;
 class ankit
{
    public
    int a,b;
 ankit (){
    a= 0;
    b =0;
 }
    ankit(int x, int y){
        a=x;
        b= y;
    }
    ankit operator +(ankit a);
    void display();
};
ankit ankit:: operator+(ankit t){
    ankit temp;
    temp.a = a+t.a;
    temp.a = a+t.b;

return temp;
}
 void ankit :: display(){
    cout<<"value of a:- "<<a<<endl;;
    cout<<"value of b:- "<<b;

 }
 int main(){
    ankit A1,A2,A3;
    A1 = ankit(10,20);
    A2 = ankit(30,40);
    A3 =A1+A2;
    A1.display();
    A2.display();
    A3.display();

    return 0;
 }
