#include <string>
#include <iostream>
#include "Product.h"
#include "Customer.h"

using namespace std;

int main()
{   
	Date date1(15,12,2024);
	Date date2(5,10,2023);
	Date date3(8,12,2023);
	Date date4(1,2,2024);
	Date date5(15,1,2023);
	
	
	Product product1(1234, "SNACKS", "SNICKERS CHOCOLATE BAR", 3.50, 15, date1);
	Product product2(1265, "SNACKS", "DORITOS CHIPS", 7.50, 6, date2);
	Product product3(1337, "DRINKS", "TURKISH COFFEE", 8.50, 20, date3);
	Product product4(1445, "TOASTS", "CHEESE TOAST", 15, 22, date4);
    Product product5(1562, "COLD AND HOT FOODS", "HOT DOG SANDWICH", 18, 20, date5);
    
    
    Customer customer1(1234, "SNACKS", "SNICKERS CHOCOLATE BAR", 3.50, 15, date1, "Kely", "Piquet","98653265");
    Customer customer2(1265, "SNACKS", "DORITOS CHIPS", 7.50, 6,date2, "Pedro","Gaseoso","1578694568");
    Customer customer3(1337, "DRINKS", "TURKISH COFFEE", 8.50, 20, date3, "Hailey", "Bieber","7563249875");
    Customer customer4(1445, "TOASTS", "CHEESE TOAST", 15, 22, date4, "Taylor", "Mounth","4437584316");
    Customer customer5(1562, "COLD AND HOT FOODS", "HOT DOG SANDWICH", 18, 20, date5, "Latifi","Verstappen","3946751980");
    
    
    cout<<"\n CANTEEN MANAGEMENT SYSTEM"<<endl<<endl;
    
    int response=0;
	cout<<" Please enter the value: ";
	cin>>response;


    product1-response;
    product2+=response;
    product3-response;
    product4+=response;
    product5+response;
    cout<<endl<<endl;
    
    
    cout<<" Customer Informations"<<endl<<endl;
    customer1.displayAllData();
    cout<<endl;
    cout<<" Product Informations"<<endl<<endl;
	cout<<product1<<endl;
	date1.print();
	cout<<endl<<endl<<endl<<endl;
	
	cout<<" Customer Informations"<<endl<<endl;
	customer2.displayAllData();
	cout<<endl;
	cout<<" Product Informations"<<endl<<endl;
	cout<<product2<<endl;
	date2.print();
	cout<<endl<<endl<<endl<<endl;
	
	
	cout<<" Customer Informations"<<endl<<endl;
	customer3.displayAllData();
	cout<<endl;
	cout<<" Product Informations"<<endl<<endl;
	cout<<product3<<endl;
	date3.print();
	cout<<endl<<endl<<endl<<endl;


    cout<<" Customer Informations"<<endl<<endl;
	customer4.displayAllData();
	cout<<endl;
	cout<<" Product Informations"<<endl<<endl;
    cout<<product4<<endl;
	date4.print();
    cout<<endl<<endl<<endl<<endl;
   
   
    cout<<" Customer Informations"<<endl<<endl;
    customer5.displayAllData();
    cout<<endl;
    cout<<" Product Informations"<<endl<<endl;
    cout<<product5<<endl;
	date5.print();
	cout<<endl<<endl<<endl<<endl;
	
	
    cout<<" Average Price: "<<Product::getAveragePrice();
    cout<<endl<<endl;
    
    
}
