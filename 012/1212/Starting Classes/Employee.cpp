#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee( const string &first, const string &last,
   const string &ssn, const int &month, const int &day, const int &year)
   : firstName( first ), lastName( last ), socialSecurityNumber( ssn ),
   birthdate( month, day, year )
{
}

void Employee::setFirstName( const string &first )
{
   firstName = first;
}

string Employee::getFirstName() const
{
   return firstName;
}

void Employee::setLastName( const string &last )
{
   lastName = last;
}

string Employee::getLastName() const
{
   return lastName;
}

void Employee::setSocialSecurityNumber( const string &ssn )
{
   socialSecurityNumber = ssn;
}

string Employee::getSocialSecurityNumber() const
{
   return socialSecurityNumber;
}

Date Employee::getBirthDate() const
{
  return this->birthdate;
}

void Employee::setBirthDate(const int &month,
const int &day, const int &year)
{
  this->birthdate.setDate(month, day, year);
}


void Employee::print() const
{
   cout << getFirstName() << ' ' << getLastName()
      << "\nsocial security number: " << getSocialSecurityNumber();
}
