#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

const int textlength = 50;      // Max input length of text
string str;                     // User's input
char arraytext[textlength];     // Original copy of string but in an array format & has been alphabetized
char arraychar[textlength];     // String with only unique characters (Banana --> Ban)

// Start sequence //
void calibrate()
{
    // Lower cases everything 
    transform( str.begin(), str.end(), str.begin(),[](unsigned char c)
        {return tolower(c);});

    // Sort string in alphabetical order 
    sort(str.begin(), str.end());
    strcpy(arraytext, str.c_str());

    // Remove repeated char
    str.erase(std::unique(str.begin(), str.end()), str.end());
    strcpy(arraychar, str.c_str());
}

// Output text //
void quantityCount()
{
    int count = 0;                                          // Counts how many of each unique letters there are in the string
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < sizeof(arraytext) - 1; j++)
            if (arraychar[i] == arraytext[j])
                count++;                                    // Increments if matches
        if (count > 2)
            cout << count << arraychar[i];                  // If amount is > 2, displays number along with char
        else
            for (int k = 0; k < count; k++)                 // Else, out the 2 char in console
                cout << arraychar[i];                       
        count = 0;                                          // Reset counter, goes on to next unique character
    }                                                       //      For example: arraychar = "abc", i = 0 goes to i = 1,
}                                                           //      it finished counting 'a', moves on to 'b' (i.e i = 1) 

int main () 
{
    cout << "Enter text: ";
    getline(cin, str);
    
    calibrate();
    quantityCount();
    
    return 0;
}