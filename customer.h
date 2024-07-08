#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>

#include "Product.h"
using namespace std;


class Customer: public Product
{
	
	public:
		Customer(int ID, string category, string productname, float price, int stock,  const Date &, string name, string surname, string billno);
		
		void displayAllData()const;
		
		void setCustomerName(string name);
		void setCustomerSurname(string surname);
		void setCustomerBillNo(string billno);
		
		string getCustomerName()const;
		string getCustomerSurname()const;
		string getCustomerBillNo()const;
		
	    
	private:
		string CustomerName;
		string CustomerSurname;
		string CustomerBillNo;
	
};

#endif
