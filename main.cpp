#include "header.h"
#include "filehandler.cpp"
#include "encrytion.cpp"

int main () 
{
    const string file = "sentence.txt";
    const int AR_SIZE = GetWordCount(file);

    string textArray[AR_SIZE];
    string tempCmp[AR_SIZE];
    
    GetFileInput(file, textArray, AR_SIZE);
    
    for(int wordIndex = 0; wordIndex < AR_SIZE; wordIndex++)
    {
        TransformAndSort(textArray[wordIndex]);
        tempCmp[wordIndex] = ParseUniqueChar(textArray[wordIndex]);
        cout << "-" + textArray[wordIndex] + "-" + tempCmp[wordIndex] + "-" << endl;
    }

    return 0;
}
