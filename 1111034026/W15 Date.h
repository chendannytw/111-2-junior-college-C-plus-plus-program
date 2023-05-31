#pragma once
#ifndef DATE_H  // if not defined
#define DATE_H

// Time class definition
class Date
{
public:
	//Date(int y,int m, int d); // constructor
	static const unsigned int monthsPerYear = 12; // months in a year
	explicit Date(int = 1, int = 1, int = 1900); // default constructor
	void print() const; // print date in month/day/year format
	~Date(); // provided to confirm destruction order
	//private:
	unsigned int month; // 1-12 (January-December)
	unsigned int day; // 1-31 based on month
	unsigned int year; // any year

	// utility function to check if day is proper for month and year
	unsigned int checkDay(int) const;
}; // end class Date

#endif
