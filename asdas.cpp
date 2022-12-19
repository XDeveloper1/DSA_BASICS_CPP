#include<bits/stdc++.h>
using namespace std;

class inventory {

    string products[6]{"shirts",
	"pants","T-shirt"
	,"sweaters"
	,"hats",
	"bags"};
    int purchase_sale[6];
    int percentage_sold[6];
    int total_purchase=0;
    int total_percentage=0;
     public:
     inventory (){
        for(int i=0;i<6;i++){
            cout<<"enter purchase sale for "<<products[i]<<" : ";
            cin>>purchase_sale[i];
            cout<<"enter percentage sale for "<<products[i]<<" : ";
            cin>>percentage_sold[i];
        }
     }
   
   void cal_percentage(){

      cout<<endl<<"********************************************************"<<endl;

      for(int i=0;i<6;i++){
         cout<<"percentage sale for "<<products[i]
		 <<" is "
		 <<(percentage_sold[i]*100.0)/purchase_sale[i]
		 <<"%"<<endl;
          total_purchase+=purchase_sale[i];
          total_percentage+=percentage_sold[i];
      }
       cout<<endl<<endl<<"***************************************************"<<endl;

      cout<<"total percentage is "<<(total_percentage*100.0)/total_purchase<<"%"<<endl;
   }


};

 
int main(){
 
  inventory r1;
  r1.cal_percentage();


 return 0;
}
