#include "header.h"

void TransformAndSort(string &str)
{
    // Lower cases everything 
    for_each(str.begin(), str.end(),[](char & c) {
        c = ::tolower(c);
    });

    // Sort string in alphabetical order 
    sort(str.begin(), str.end());
}


/*
void quantityCount()
{
    int count = 0;                                      
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < sizeof(cstr) - 1; j++)
        {
            if (cstr[i] == cstr[j])
                count++;     
        }                           
        if (count > 2)
        {
            cout << count << cstr[i];  
        }            
        else
        {
            for (int k = 0; k < count; k++)
                cout << cstr[i];     
        }
        count = 0;   
    }                
}

/*
void Unique(string str)
{
    char * cstr = new char [str.length()+1];
    char * ucstr = new char [str.length()+1];

    // Lower cases everything 
    for_each(str.begin(), str.end(),[](char & c) {
        c = ::tolower(c);
    });

    // Sort string in alphabetical order 
    sort(str.begin(), str.end());
    strcpy(cstr, str.c_str());

    // Remove repeated char
    str.erase(unique(str.begin(), str.end()), str.end());
    strcpy(ucstr, str.c_str());
}
*/