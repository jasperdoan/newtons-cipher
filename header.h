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

// encrytion.cpp
void TransformAndSort(string &str);

#endif
