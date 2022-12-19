#include<bits/stdc++.h>
using namespace std;
class parent{

    protected:
    int id_protected=10;

};
class child:public parent{
    public:
    void setid(int id){
        int c;
            id_protected+id;

    

    }
    void displyid(){
        
        cout<<"display protecting mamber:"<<id_protected<<endl;
    }
};
int main(){
    child obj1;
    obj1.setid(7);
    obj1.displyid();
}
