// Fig. 9.1: Time.h
// Time class definition.
// Member functions are defined in Time.cpp

// prevent multiple inclusions of header
#ifndef Date_H
#define Date_H

// Time class definition
class Date
{
public:
	Date(int,int,int); // constructor
	void setDate(int, int, int); // set hour, minute and second
	void printUniversal() const; // print time in universal-time format
	void printStandard() const; // print time in standard-time format
private:
	unsigned int year; // 0 - 12 (24-hour clock format)
	unsigned int month; // 0 - 12
	unsigned int day; // 0 - 31
}; // end class Time

#endif
