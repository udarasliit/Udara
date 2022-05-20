#include "User.h"
#include <iostream>
#include <string>
using namespace std;


Customer::Customer(){
	
		Cust_ID="";
	  password="";
		
	
}

Customer::Customer(string Name,string Address,int pnumber,string email)
:User(string Name,string Address,int pnumber,string email)
{
	
		Cust_ID=Custid;
	  password=pass;
		
	
}

Customer::~Customer(){
	
	cout<<"Deleting customer"<<endl;
	
}
