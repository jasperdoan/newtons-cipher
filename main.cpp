#include "header.h"
#include "filehandler.cpp"
#include "encrytion.cpp"

int main () 
{
    const string file = "sentence.txt";
    const string output = "encrypted.txt";
    const int AR_SIZE = GetWordCount(file);

    ofstream fout;
    string textArray[AR_SIZE];
    string tempCmp[AR_SIZE];
    
    GetFileInput(file, textArray, AR_SIZE);
    
    fout.open(output);

    for(int wordIndex = 0; wordIndex < AR_SIZE; wordIndex++)
    {
        TransformAndSort(textArray[wordIndex]);
        tempCmp[wordIndex] = ParseUniqueChar(textArray[wordIndex]);

        Output(cout, textArray[wordIndex], tempCmp[wordIndex]);
        Output(fout, textArray[wordIndex], tempCmp[wordIndex]);

        cout << " ";
        fout << " ";
    }

    fout.close();

    return 0;
}
