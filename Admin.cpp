#include <iostream>
#include <string>
#include "Admin.h"
#include "User.h"
#define SIZE 1;
using namespace std;


Admin::Admin(){
	
 Admin_ID="";
 password="";
	
}

Admin::Admin(string Name,string Address,int pnumber,string email,string adminid,string pass,Customer *cu,Agent *age,Report *re)
:User(string Name,string Address,int pnumber,string email)
{
	Admin_ID=adminid;
	password=pass;
	cus[0]=cu;
	seller[0]=se;
	report[0]=re;
	
}

Admin::~Admin(){
	
	cout<<"admin deleted account"<<endl;
	
}
