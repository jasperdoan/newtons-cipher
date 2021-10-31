#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

const int textlength = 7;
string str;            
char arraytext[textlength];                
char arraychar[textlength];                 

void calibrate()
{
    transform(str.begin(), str.end(), str.begin(),[](unsigned char c)
        { return std::tolower(c); });

    sort(str.begin(), str.end());

    strcpy(arraytext, str.c_str());
    strcpy(arraychar, arraytext);
}

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

void quantityCount()
{
    int savepoint = 0; 
    int count = 0;

    for (int i = 0; i < sizeof(arraychar) - 1; i++)
    {
        for (int j = savepoint; j < sizeof(arraytext) - 1; j++)
        {
            if (arraychar[i] == arraytext[j])
            {
                count++;
                if (arraychar[i] != arraytext[j+1])
                {
                    cout << count << arraychar[i];
                    savepoint = savepoint + count;
                    j = savepoint;
                    count = 0;
                    break;
                }
                // else
                // {
                //     for (int k = 0; k < count; k++)
                //         cout << arraychar[i];

                //     savepoint = savepoint + count;
                //     j = savepoint;
                //     count = 0;
                //     break;
                // }
            }
        }
    }
}

int main () 
{
    cout << "Enter text: ";
    getline(cin, str);

    calibrate();
    seperateChar();
    quantityCount();
    
    return 0;
}