#include <string>
#include "Date.h" 
using namespace std;

#ifndef PRODUCT_H
#define PRODUCT_H


class Product
{
	    friend ostream &operator<<(ostream &output, Product &myProduct);
	public:
		explicit Product(int ID, string category, string productname, float price, int stock, const Date & );
		
		void print() const;
	    ~Product();
	    void displayAllData();
	    
	    Product &operator+(int number);
	    Product &operator-(int number);
	    Product &operator+=(int number);
	    
		static double getAveragePrice();
	    
	    void setProductID(int ID);
		void setProductCategory(string category);
	    void setProductName(string productname);
	    void setProductStock(int stock);
	    
		void setProductPrice(float price);
		void setProductPrice(double price);
		
		int getProductID() const;
	    string getProductCategory() const;
	    string getProductName() const;
	    float getProductPrice() const;
		int getProductStock() const;
		
		
		
		
	protected:
		int ProductID;
	    string ProductCategory;
	    string ProductName;
	    float ProductPrice;
		int ProductStock;
		
		const Date expirationDate;
		
		static double averagePrice;
	    
	    
};

#endif

