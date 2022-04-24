#include "header.h"

/**
 * @brief Get the Word Count
 * 
 * @param file 
 * @return int 
 */
int GetWordCount(string file)
{
    ifstream fin;
    int word = 1;
    char ch;

    fin.open(file);
    
    fin.seekg(0,ios::beg); //move file pointer to begining of file
 
    while(fin)
    {
        fin.get(ch);
        if(ch == ' ' || ch == '\n')
        {
            word++;
        }
    } 
    fin.close();
 
    return word;
}

/**
 * @brief Get the File Input and place them into an array of str
 * 
 * @param file 
 * @param AR 
 * @param AR_SIZE 
 */
void GetFileInput(string file, string AR[], const int AR_SIZE)
{
    ifstream fin;
    int index = 0;

	fin.open(file);

    while (fin && index < AR_SIZE)
	{
		fin >> AR[index];
		index++;
	}

    fin.close();
}

/**
 * @brief Output file
 * 
 * @param str 
 * @param ustr 
 */
void Output(ostream &outLoc, string str, string ustr)
{
    int count = 0;   
    char * cstr = new char [str.length()+1];
    char * ucstr = new char [str.length()+1]; 

    strcpy(cstr, str.c_str());
    strcpy(ucstr, ustr.c_str());

    for (int i = 0; i < ustr.length(); i++)
    {
        for (int j = 0; j < str.length(); j++)
        {
            if (ucstr[i] == cstr[j])
                count++;     
        }                           
        if (count > 2)
        {
            outLoc << count << ucstr[i];  
        }            
        else
        {
            for (int k = 0; k < count; k++)
                outLoc << ucstr[i];     
        }
        count = 0;   
    }
    
    delete[] cstr;
    delete[] ucstr;     
}