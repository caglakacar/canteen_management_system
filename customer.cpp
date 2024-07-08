#include <iostream>
#include "Customer.h"

using namespace std;


Customer::Customer(int ID, string category, string productname, float price, int stock, const Date &dateOfProduct, string name, string surname,string billno)
    :Product(ID,  category,  productname, stock, price, dateOfProduct)
         
{
	setCustomerName(name);
	setCustomerSurname(surname);
	setCustomerBillNo(billno);
	
}         

void Customer::displayAllData()const
{
	cout<<" Customer Name: "<<getCustomerName()<<endl;
	cout<<" Customer Surname: "<<getCustomerSurname()<<endl;
	cout<<" Customer Bill No: "<<getCustomerBillNo()<<endl;
	
}


void Customer::setCustomerName(string name)
{
	CustomerName = name;
}


void Customer::setCustomerSurname(string surname)
{
	CustomerSurname = surname;
}


void Customer::setCustomerBillNo(string billno)
{
	CustomerBillNo = billno;
}


string Customer::getCustomerName()const
{
	return CustomerName;
}


string Customer::getCustomerSurname()const
{
	return CustomerSurname;
}


string Customer::getCustomerBillNo()const
{
	return CustomerBillNo;
}

