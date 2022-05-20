#include "User.h"
#define SIZE 1;

class Admin:public User{
	
   private:
   	string Admin_ID;
   	string password;
   	Customer *cus[SIZE];
   	Agent *Age[SIZE];
   	Report *report[SIZE];
   public:
   	void deleteItemDetails();
   	void updateItemDetails();
   	void createCategory();
   	void manageusers();
   	Admin();
   	Admin(string Name,string Address,int pnumber,string email,string adminid,string pass,Customer *cu,Agent *age,Report *re);
   	~Admin();
   	
     
	
	
};
