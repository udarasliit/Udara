#inlcude "User.h"

class Customer::public User{
	
	private:
		string Cust_ID;
		string password;
		
	public:
		void addFeedback();
		void updateProfile();
		void search();
		void makeClaim();
		Customer();
		Customer(string Name,string Address,int pnumber,string email);
		~Customer();
	
	
};
