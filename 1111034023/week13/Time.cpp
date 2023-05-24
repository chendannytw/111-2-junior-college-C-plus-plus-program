// Fig. 9.2: Time.cpp
// Time class member-function definitions.
#include <iostream>
#include <iomanip>
#include <stdexcept> // for illegal_argument exception class
#include "Time.h" // include definition of class Time from Time.h

using namespace std;

// Time constructor initializes each data member to zero.
Date::Date(int y, int m, int d)
   : year( y ), month( m ), day( d )
{ 
} // end Time constructor

// set new Time value using universal time
void Date::setTime( int h, int m, int s )
{
   // validate hour, minute and second
   if ( ( h >= 1 && h < 9999 ) && ( m >= 1 && m < 13 ) && 
      ( s >= 0 && s < 32 ) ) 
   {
      year = h;
      month = m;
      day = s;
   } // end if
   else
      throw invalid_argument( 
         "hour, minute and/or second was out of range" );
} // end function setTime

// print Time in universal-time format (HH:MM:SS)
void Date::printUniversal() const
{
   cout << setfill( '0' ) << setw( 2 ) << year << ":" 
      << setw( 2 ) << month << ":" << setw( 2 ) << day;
} // end function printUniversal

// print Time in standard-time format (HH:MM:SS AM or PM)
void Date::printStandard() const
{
   cout << ( ( year > 1991 || year <10000 ) ? year-1911 : 1911-year ) << ":" 
      << setfill( '0' ) << setw( 2 ) << month << ":" << setw( 2 )
      << day << ( year > 1911 ? " ¥Á°ê" : " ¦è¤¸" );
} // end function printStandard

/**************************************************************************
 * (C) Copyright 1992-2014 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
