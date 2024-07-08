#include <string>
#include <iostream>
#include <fstream>
#include "Product.h"


using namespace std;

double Product::averagePrice=0;
 

Product::Product(int ID, string category, string productname, float price, int stock ,const Date &dateOfProduct)
    :expirationDate(dateOfProduct)
{    
    setProductID(ID);
	setProductCategory(category);
    setProductName(productname);
	setProductPrice(price);
	setProductStock(stock);
	
	averagePrice=(averagePrice + price)/ 5;
	
	//cout<<"Inside the constructor "<<ProductName<<" is created"<<endl;
}



Product::~Product()
{
	ofstream MyFile("ProductFile.txt");
	MyFile<<ProductName<<"-"<<ProductPrice<<"\n"<<endl;
	MyFile.close();
	
	//cout<<ProductName<<" is destroyed by the destructor"<<endl;
}


void Product::print() const 
{
	cout<<"\nExpiration Date: ";
	expirationDate.print();
	cout<<endl;
	
}
void Product::displayAllData() 
{
	cout<<"Product ID: "<<getProductID()<<endl;
	cout<<"Product Category: "<<getProductCategory()<<endl;
	cout<<"Product Name: "<<getProductName()<<endl;
	cout<<"Product Price: "<<getProductPrice()<<endl;
	cout<<"Product Stock: "<<getProductStock()<<endl;
	
	
}


void Product::setProductID(int ID)
{
    ProductID=ID;	
}



void Product::setProductCategory(string category)
{
	
	if(category=="SNACKS"||category=="DRINKS"||category=="TOASTS"||category=="COLD AND HOT FOODS")
	{
		ProductCategory=category;
	}
	
	else
	{
		ProductCategory="Invalid Category!";
		cerr<<"Invalid Category"<<endl;
	}
	
}


void Product::setProductName(string productname)
{  
    if(productname.size()<=30)
	{
    	ProductName=productname;
	}
	
	else
	{
		ProductName=productname.substr(0,30);
		cerr<<"Product Name "<<productname<<" exceeds 30 characters. Thus, program takes only first 30 characters as products name."<<endl;
	}
	
}



void Product::setProductPrice(float price)
{
    if(price<0)
	{   
	    ProductPrice=0;
    	cerr<<"Product's Price can't be negative!"<<endl;
	}
	
	
	else
	{
		ProductPrice=price; 	
	}
	
	
}

void Product::setProductPrice(double price)
{
    if(price<0)
	{   
	    ProductPrice=0;
    	cerr<<"Product's Price can't be negative!"<<endl;
	}
	
	
	else
	{
		ProductPrice=price; 	
	}
	
	
}


void Product::setProductStock(int stock)
{
	if(stock<=0)
	{
		ProductStock=0;
		cerr<<"Product is not found in stock!"<<endl;
	}
	
	else
	{
		ProductStock=stock;
	}
	
}




int Product::getProductID() const
{
	return ProductID;
}


string Product::getProductCategory() const
{
	return ProductCategory;
}


string Product::getProductName() const
{
	return ProductName;
}


float Product::getProductPrice() const
{
	return ProductPrice;
}


int Product::getProductStock() const
{
	return ProductStock;
}



ostream &operator<<(ostream &output, Product &myProduct)
{
	output<<" Product ID: "<<myProduct.ProductID
	<<"\n Product Category: "<<myProduct.ProductCategory
	<<"\n Product Name: "<<myProduct.ProductName
    <<"\n Product Price: "<<myProduct.ProductPrice
	<<"\n Product Stock: "<<myProduct.ProductStock;
	
	return output;
}



Product &Product::operator+(int number)
{
	ProductPrice = ProductPrice-number;
	return *this;
}



Product &Product::operator-(int number)
{
	ProductStock = ProductStock-number;
	return *this;
}


Product &Product::operator+=(int number)
{
    ProductStock = ProductStock+number;
	return *this;
}


double Product::getAveragePrice()
{
	return averagePrice;
}

