#include "header.h"

/**
 * @brief Transform string and sort in alphabetical order
 * 
 * @param str 
 */
void TransformAndSort(string &str)
{
    // Lower cases everything 
    for_each(str.begin(), str.end(),[](char & c) {
        c = ::tolower(c);
    });

    // Sort string in alphabetical order 
    sort(str.begin(), str.end());
}

/**
 * @brief Parse string to no repeating characters
 * 
 * @param str 
 * @return string 
 */
string ParseUniqueChar(string str)
{
    str.erase(unique(str.begin(), str.end()), str.end());

    return str;
}