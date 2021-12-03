#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int GetWordCount(string file)
{
    ifstream fin(file);
    int word = 1;
    char ch;
    
    fin.seekg(0,ios::beg); //bring position of file pointer to begining of file
 
    while(fin)
    {
        fin.get(ch);
        if(ch ==' ' || ch =='\n')
        {
            word++;
        }
    } 
    fin.close();
 
    return word;
}

void GetFileInput(string file, string AR[], const int AR_SIZE)
{
    int index;
    ifstream fin;

    index = 0;

	fin.open(file);

    while (fin && index < AR_SIZE)
	{
		fin >> AR[index];
		index++;
	}

    fin.close();
}
/*
void Transform(string &str)
{
    // Lower cases everything 
    for_each(str.begin(), str.end(),[](char & c) 
    {
        c = ::tolower(c);
    });

    // Sort string in alphabetical order 
    sort(str.begin(), str.end());
    char * cstr = new char [str.length()+1];
    strcpy(cstr, str.c_str());

    // Remove repeated char
    str.erase(unique(str.begin(), str.end()), str.end());
    char * ucstr = new char [str.length()+1];
    strcpy(ucstr, str.c_str());
}

// Output text //
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
}*/