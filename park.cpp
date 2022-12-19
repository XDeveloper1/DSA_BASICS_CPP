#include<iostream>
using namespace std;
int main()
{
	int age;
	int members;
	char name;
	int price;
	int t1,t2,t3;
	 int total_price;
	
		cout<<"how many members in family";
		cin>>members;		
	

		for(int i=0;i<=members;i++){
			cout<<"enter your age ";
			cin>>age;
			if(age>=10 && age<=15){
				
				price = 90;
				cout<<"congrats you get 10% discount your discounted price is:-- "<<price<<endl;
				price = t1;
				
				
			}else{
				if(age>=15 && age<=20){
					price =95;
					cout<<"congrats you get 5% discount your discounted price is:-- "<<price<<endl;
					price = t2;
					
				}else {
					if(age<20){
							price = 100;
							cout<<"you are not able to take dicount:-- "<<price<<endl;
							price = t3;
							
							
							}else{
								cout<<"something went wrong"<<endl;
							}
						}
					}
				} 
				total_price=t1+t2+t3;
					cout<<"your total price:-- "<<total_price;	
};

