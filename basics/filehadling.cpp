#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
   ifstream inf1, inf2;
   inf1.open("Country.txt");
   inf2.open("Capital.txt");
   int i;
   char str[50];
   for(i=1;i<=10;i++)
   {
       if(inf1.eof()!=0)
       {
           cout<<" Exit from country file"<<endl;
           exit(1);
       }
       inf1.getline(str,50);
       cout<<"The capital of "<<str<<endl;
       inf2.getline(str,50);
       cout<<str<<endl;
   }
        inf1.close();
        inf2.close();
	return 0;
}

