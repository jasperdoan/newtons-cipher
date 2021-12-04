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