#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

const int textlength = 50;
string str;            
char arraytext[textlength];                
char arraychar[textlength];                 

void calibrate()
{
    transform( str.begin(), str.end(), str.begin(),[](unsigned char c)
        {return tolower(c);});

    sort(str.begin(), str.end());
    strcpy(arraytext, str.c_str());

    str.erase(std::unique(str.begin(), str.end()), str.end());
    strcpy(arraychar, str.c_str());
}

void quantityCount()
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < sizeof(arraytext) - 1; j++)
            if (arraychar[i] == arraytext[j])
                count++;
        if (count > 2)
            cout << count << arraychar[i];
        else
            for (int k = 0; k < count; k++) 
                cout << arraychar[i];
        count = 0;
    }
}

int main () 
{
    cout << "Enter text: ";
    getline(cin, str);
    
    calibrate();
    quantityCount();
    
    return 0;
}