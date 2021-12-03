#include "filehandler.cpp"
                    
int main () 
{
    const string file = "sentence.txt";
    const int AR_SIZE = GetWordCount(file);

    string fileStringAR[AR_SIZE];

    GetFileInput(file, fileStringAR, AR_SIZE);
    
    for(int i = 0; i < AR_SIZE; i++)
    {
        cout << "-" + fileStringAR[i] + "-" << endl;
    }

    return 0;
}
