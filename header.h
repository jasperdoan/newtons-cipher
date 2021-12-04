#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

// filehandler.cpp
int GetWordCount(string file);
void GetFileInput(string file, string AR[], const int AR_SIZE);
void Output(ostream &outLoc, string str, string ustr);

// encrytion.cpp
void TransformAndSort(string &str);
string ParseUniqueChar(string str);

#endif
