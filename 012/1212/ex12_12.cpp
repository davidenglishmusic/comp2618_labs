#include <iostream>
#include <iomanip>
#include <vector>
#include <typeinfo>
#include <ctime>

#include "Starting Classes/Employee.h"
#include "Starting Classes/SalariedEmployee.h"
#include "Starting Classes/CommissionEmployee.h"
#include "Starting Classes/BasePlusCommissionEmployee.h"
using namespace std;

int determineMonth();

int main()
{
   cout << fixed << setprecision( 2 );

   vector < Employee * > employees( 3 );

   employees[ 0 ] = new SalariedEmployee(
      "John", "Smith", "111-11-1111", 6, 15, 1944, 800 );
   employees[ 1 ] = new CommissionEmployee(
      "Sue", "Jones", "333-33-3333", 9, 8, 1954, 10000, .06 );
   employees[ 2 ] = new BasePlusCommissionEmployee(
      "Bob", "Lewis", "444-44-4444", 12, 2, 1965, 5000, .04, 300 );

   int month = determineMonth();

   cout << "Employees processed polymorphically via dynamic binding:\n\n";

   for ( size_t i = 0; i < employees.size(); ++i )
   {
      employees[ i ]->print();
      cout << endl;

      BasePlusCommissionEmployee *derivedPtr =
         dynamic_cast < BasePlusCommissionEmployee * >
            ( employees[ i ] );

      if ( derivedPtr != 0 )
      {
         double oldBaseSalary = derivedPtr->getBaseSalary();
         cout << "old base salary: $" << oldBaseSalary << endl;
         derivedPtr->setBaseSalary( 1.10 * oldBaseSalary );
         cout << "new base salary with 10% increase is: $"
            << derivedPtr->getBaseSalary() << endl;
      }

      Date birthday = employees[ i ]->getBirthDate();

      if ( birthday.getMonth() == month )
         cout << "HAPPY BIRTHDAY!\nearned $"
            << ( employees[ i ]->earnings() + 100.0 ) << endl;
      else
         cout << "earned $" << employees[ i ]->earnings() << endl;

      cout << endl;
   }

   for ( size_t j = 0; j < employees.size(); ++j )
   {
      cout << "deleting object of "
         << typeid( *employees[ j ] ).name() << endl;

      delete employees[ j ];
   }
}

int determineMonth()
{
   time_t currentTime;
   char monthString[ 3 ];
   time( &currentTime );
   strftime( monthString, 3, "%m", localtime( &currentTime ) );
   return atoi( monthString );
}
