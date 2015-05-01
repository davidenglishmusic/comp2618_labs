#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Date.h"

class Employee
{
public:
   Employee( const std::string &, const std::string &,
      const std::string &, const int &, const int &, const int &);
   virtual ~Employee() { }

   void setFirstName( const std::string & );
   std::string getFirstName() const;

   void setLastName( const std::string & );
   std::string getLastName() const;

   void setSocialSecurityNumber( const std::string & );
   std::string getSocialSecurityNumber() const;

   void setBirthDate(const int &, const int &, const int &);
   Date getBirthDate() const;

   virtual double earnings() const = 0;
   virtual void print() const;
private:
   std::string firstName;
   std::string lastName;
   std::string socialSecurityNumber;
   Date birthdate;
};

#endif
