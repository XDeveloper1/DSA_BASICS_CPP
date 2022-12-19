#include<bits/stdc++.h>
using namespace std;
struct company
{
  long long shipment_tons ;
  string p_name;
  long long net_selling_price;
 
};
int main(){

	struct company stud[6];
  	int i;
  	long long ps;
  	long long psl;
  	long long ff;
  	long long total_revn;
  	long long a;
  	long long b;
  

	for(i=0; i<2; i++){                   	
		cout << "---------revenue--------- " << i + 1 << endl;
		cout << "Enter the year" << endl;
		cin >> stud[i].p_name;
		cout << "Enter flat rolled steal shipments in tons" << endl;
		cin >> stud[i].shipment_tons;
		cout << "Enter average net selling price" << endl;
		cin >> stud[i].net_selling_price;
	
		
		
		
		
		
	

	}
	
		
		

	for(i=0; i<2; i++){						
		cout << "----------revenue----------" << i + 1 << endl;
		cout << " shipment year : " << stud[i].p_name << endl;
		cout << "flat rolled steal shipments (in tons) : " << stud[i].shipment_tons << endl;
		cout << "Average Net selling price:" << stud[i].net_selling_price << endl;
		cout<<"revenue of company: "<<stud[i].shipment_tons*stud[i].net_selling_price<<endl;
		
		total_revn+=stud[i].shipment_tons*stud[i].net_selling_price;
		
		
		
		
	}
	cout<<"+++++++++++==================+++++++++++"<<endl;
	
		ff=ps+psl;
		
		cout<<"Total revenue :-- "<<total_revn<<endl;
		
		cout<<"+++++++++++==================+++++++++++";
	return 0;
}
