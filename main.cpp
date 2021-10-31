/*****************************************************************************
*  AUTHOR #1  : Jasper Doan
*  AUTHOR #2  : Andrew Huh
*  LAB#11     : Flo's Party Planner
*  CLASS      : CS1A
*  SECTION    : TTh: 1:30pm
*  DUE DATE   : Oct 30th, 2021
*****************************************************************************/
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

/*****************************************************************************
 *  Flo's Party Planner
 * ___________________________________________________________________________
 *  A program to help Florence decide which snacks and beverages to serve
 *        her friends. Using selection statements to determine the proper 
 *        snack and beverage recommendations the program will make
 * ___________________________________________________________________________
 *  INPUT:
 *      name                : The user's name
 *      age                 : The user's age
 *      snackChoice         : Y/N snack choice
 *      nutChoice           : Y/N nut choice
 *      chocolatePref       : User's snack preference
 *  OUTPUT:
 *      name                : The user's name
 *      drinks              : User's beverage recommondations
 *      chocolatePref       : User's snack preference
 ****************************************************************************/

int main()
{
	/***********************************************************************
     * CONSTANTS & VARIABLES
     * ---------------------------------------------------------------------
     * OUTPUT - USED FOR CLASS HEADING
     * ---------------------------------------------------------------------
     * PROGRAMMER   : Jasper Doan
     * PROGRAMMER   : Andrew Huh
     * CLASS        : CS1A
     * SECTION      : TTh: 1:30pm
     * LAB_NUM      : LAB #13
     * LAB_NAME     : Flo's Party Planner
     ***********************************************************************/
     const char  PROGRAMMER[]  = "Jasper Doan & Andrew Huh";
     const char  CLASS[]       = "CS1A";
     const char  SECTION[]     = "TTh: 1:30pm";
     const int   LAB_NUM       = 13;
     const char  LAB_NAME[]    = "Flo's Party Planner";

     const int NAME_SIZE       = 25;    // PROCESSING - Size of user's name
     const int SNACK_SIZE      = 30;    // PROCESSING - OUTPUT's snack size
     const int DRINK_SIZE      = 6;     // PROCESSING - OUTPUT's drinks size 
     const int COL_SIZE        = 30;    // PROCESSING - INPUT size format

     char   name[NAME_SIZE];            // IN & OUT   - User's name
     int    age;                        // IN & PROC  - User's age
     char   drinksPref[SNACK_SIZE];     // PROC & OUT - User's drink choice
     char   chocolatePref[SNACK_SIZE];  // PROC & OUT - User's chocolate 
                                        //              preference
     char   snackChoice;                // IN & PROC  - User's input on snack
     char   nutChoice;                  // IN & PROC  - User's input on nuts

	/*************************************************************************
	*  OUTPUT - Class Heading
     *************************************************************************/
	cout << left;
	cout <<"**************************************************\n";
	cout <<"*  PROGRAMMED BY : "    << PROGRAMMER << endl;
	cout <<"*  "      <<  setw(14)  <<  "CLASS"   << ": " << CLASS    << endl;
	cout <<"*  "      <<  setw(14)  <<  "SECTION" << ": " << SECTION  << endl;
	cout <<"*  AS  #" <<  setw(9)   <<  LAB_NUM   << ": " << LAB_NAME << endl;
	cout <<"**************************************************\n\n";
	cout << right;

	/*************************************************************************
	*  INPUT - Obtaining the user's information
	*************************************************************************/
     cout << left;
     
     cout << setw(COL_SIZE) << "What is your friends name?";
     cin.getline(name, NAME_SIZE);

     cout << setw(COL_SIZE) << "How old is your friend?";
     cin  >> age;
     cin.ignore(10000,'\n');

     cout << setw(COL_SIZE) << "Do they like chocolate (Y/N)?";
     cin.get(snackChoice);
     snackChoice = toupper(snackChoice);
     cin.ignore(10000,'\n');

// cerr << "BEGIN TEST"               << endl
//      << "Name: "  << name          << endl
//      << "Age: "   << age           << endl
//      << "Snack: " << snackChoice   << endl
//      << "END TEST"                 << endl;

	/*************************************************************************
	*  PROCESSING - Deciding which snacks and beverages to serve
     *************************************************************************/
     
     if(snackChoice == 'Y')
     {
          cout << setw(COL_SIZE) << "Do they like nuts (Y/N)?";
          cin.get(nutChoice);
          nutChoice = toupper(nutChoice);
          cin.ignore(10000,'\n');

          if(nutChoice == 'Y')
          {
               strncpy(chocolatePref,"Peanut M & M\'s", SNACK_SIZE);
          }
          else
          {
               strncpy(chocolatePref,"M & M\'s", SNACK_SIZE);
          }
     }
     else
     {
          strncpy(chocolatePref,"Skittles", SNACK_SIZE);
     }

// cerr << "BEGIN TEST"                       << endl
//      << "nutChoice: "     << nutChoice     << endl
//      << "chocolatePref: " << chocolatePref << endl
//      << "END TEST"                         << endl;

     if(age >= 21)
     {
          strncpy(drinksPref,"wine", DRINK_SIZE);
     }
     else
     {
          if(age > 5)
          {
               strncpy(drinksPref,"soda", DRINK_SIZE);
          }
          else
          {
               strncpy(drinksPref,"juice", DRINK_SIZE);
          }
     }

// cerr << "BEGIN TEST"                 << endl
//      << "Age: "        << age        << endl
//      << "drinksPref: " << drinksPref << endl
//      << "END TEST"                   << endl;

     cout << endl;

	/***************************************************************************
     * OUTPUT - Display the user's snacks and drinks 
     *
     *         For example:
     *    What is your friend's name?    Kris Kryzmarcik
     *    How old is your friend?        5
     *    Do they like chocholate (Y/N)? Y
     *    Do they like nuts (Y/N)?       Y
     * 
     *    Kris Kryzmarcik should be served Peanut M & M's and juice.
     ***************************************************************************/

     cout << name << " should be served " << chocolatePref << " and " << drinksPref << '.';

	return 0;
}

