#include <iostream>
#include <cstring>
using namespace std;

struct inventroy
{
  float p_sales ;
  string p_name;
  float p_sold;
 
};

int main(){

	struct inventroy stud[6];
  	int i;
  	int ps;
  	int psl;
  	float ff;
  

	for(i=0; i<6; i++){                   	
		cout << "---------inventory--------- " << i + 1 << endl;
		cout << "Enter your product name" << endl;
		cin >> stud[i].p_name;
		cout << "Enter purchase sales" << endl;
		cin >> stud[i].p_sales;
		cout << "Enter purchase sold" << endl;
		cin >> stud[i].p_sold;
		ps+=stud[i].p_sales;
		psl+=stud[i].p_sold;

	}
	
		
		

	for(i=0; i<6; i++){						
		cout << "----------inventory----------" << i + 1 << endl;
		cout << "product name : " << stud[i].p_name << endl;
		cout << "purchase sales : " << stud[i].p_sales << endl;
		cout << "purchase sold :" << stud[i].p_sold << endl;
		cout<<"percentage :-  "<<(stud[i].p_sold/stud[i].p_sales)*100<<"%"<<endl;
		
		
	}
	cout<<"+++++++++++==================+++++++++++"<<endl;
	
		ff=ps+psl;
		
		cout<<"Total percentage :-- "<<ff/100<<"%"<<endl;
		
		cout<<"+++++++++++==================+++++++++++";
	return 0;
}
