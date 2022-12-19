#include<bits/stdc++.h>
using namespace std;

class company{
    long long shipment_tons ;
    long long ship[2];
    long long net[2];
    string p_name;
    long long net_selling_price;
  	
  	long long ps;
  	long long psl;
  	
  	long long ff;
  	long long total_revn;
  	
    
 public:

    company(){
        
    	for(int i=0; i<2; i++){                   	
		cout << "---------revenue--------- " << i + 1 << endl;
		cout << "Enter the year" << endl;
		cin >> p_name;
		cout << "Enter flat rolled steal shipments in tons" << endl;
		cin >> ship[i];
		cout << "Enter average net selling price" << endl;
		cin >> net[i];
       
    }
    
    }
    friend void cal_total_sale_revenue(company);
};



void cal_total_sale_revenue(company r){
 
    

    	for(int i=0; i<2; i++){						
		cout << "----------revenue----------" << i + 1 << endl;
		cout << " shipment year : " << r.p_name << endl;
		cout << "flat rolled steal shipments (in tons) : " << r.ship[i] << endl;
		cout << "Average Net selling price:" << r.net[i] << endl;
		cout<<"revenue of company: "<<r.ship[i]*r.net[i]<<endl;
		
		r.total_revn+=r.ship[i]*r.net[i];
        
        }	
        
        cout<<"++++++++++++++++---------++++++++++++++"<<endl;
        cout<<"Total revenue :-- "<<r.total_revn<<endl;
        cout<<"++++++++++++++++---------+++++++++++++"<<endl;

}
    
    

 
int main(){
 
 company  c1 ;
 cal_total_sale_revenue(c1);
 return 0;
}
