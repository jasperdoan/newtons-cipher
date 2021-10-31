#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

const int textlength = 7;                   // For now keep this at 7, I don't want to complicate things, just test with 6 letters words
char arraytext[textlength];                 // INPUT from user
char arraychar[textlength];                 // Non-repeated characters string
char datatable[sizeof(arraychar) + 1][3];   // Data table to sort [in-progress :( ]

// Calibrate the whole sequence 
void start()
{
    cout << "Enter text: ";
    cin.getline(arraytext, textlength);
    strcpy(arraychar, arraytext);
}

// Function to count the argument letter in the text/string
int countNumbers(char letter, char temp[textlength])
{
    int count = 0;

    for (int i = 0; i < textlength; i++)
    {
        if (letter == temp[i])
            count++;
    }
    return count;

    /********************* [TO BE ADDED] **********************
    /Function returns if there are 2 more letters in a string
    **********************************************************/
}

// Separating/narrow down repeated letters
void seperateChar()
{
    int i,j, index = 0;

    for (i = 0; i < sizeof(arraychar); i++)
    {
        for (j = 0; j < i; j++)
        {
            if (arraychar[i] == arraychar[j])
                break;
        }
        if (j == i)
            arraychar[index++] = arraychar[i];
    }
}

// Setting up a data table so I can sort data and stuff to output into Newton's cipher
void settingUpDataTable()
{
    int num;

    seperateChar();
    strcpy(datatable[0], arraychar);

    for(int i = 0; i < sizeof(arraychar); i++)
    {
        num = countNumbers(arraychar[i], arraytext);

        datatable[i][1] = (char)num;
    }
}

// output table function
void table()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < sizeof(arraychar); j++)
        {
            cout << datatable[i][j];
        }
        cout << endl;
    }
}

int main () 
{
    start();
    settingUpDataTable();

    cout << arraytext << endl << arraychar << endl; // test for text and short text to only non-repeating letters (Banana --> Ban)
    cout << countNumbers('a', arraytext) << endl;   // test for counts how many 'a' in "Banana" - Will change this soon for the whole string instead of just 'a'
    table();                                        // outputs the table that DOESN't FUCKING WORK AWIGDIADWIADBIA


    return 0;
}