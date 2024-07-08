#ifndef DATE_H
#define DATE_H

class Date 
{
public:
   static const int monthsPerYear = 12; // months in a year
   explicit Date( int d= 1, int m= 1, int y= 1900 ); // default constructor
   void print() const; // print date in month/day/year format
   ~Date(); // provided to confirm destruction order
private:
   int month; // 1-12 (January-December)
   int day; // 1-31 based on month
   int year; // any year
   
   int checkDay( int d) const; 
}; 
#endif


