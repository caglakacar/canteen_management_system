#include <iostream>
#include <stdexcept>
#include "Date.h" 
using namespace std;

Date::Date( int d, int m, int y )
{
   if ( m > 0 && m <= monthsPerYear ) 
      month = m;
   else 
      throw invalid_argument( "month must be 1-12" );

   year = y; 
   day = checkDay( d ); 

   
   /*cout << "Date object constructor for date ";
   print();        */           
   
} 


void Date::print() const
{
   cout <<" Expiration Day: "<< day << '/' << month << '/' << year; 
} 


Date::~Date()
{ 
  /* cout << "Date object destructor for date ";
   print();
   cout << endl;*/
} 


int Date::checkDay( int d ) const
{
   int daysPerMonth[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

   // determine whether testDay is valid for specified month
   if ( d > 0 && d <= daysPerMonth[ month ] )
      return d;

   // February 29 check for leap year 
   if ( month == 2 && d == 29 && year % 4 == 0)
      return d;

   throw invalid_argument( "Invalid day for current month and year" );
} 


