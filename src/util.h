#pragma once
#include "types.h"
#include <string>
#include <vector>
#include <iostream>
#include <fstream>

#define PRINT_BLUE		1
#define PRINT_GREEN		2
#define PRINT_RED		4
#define PRINT_BRIGHT	8

#define __WINDOWS__

bool fileExists(const string& fileName);

char * loadFile( const string& fileName, int& length);

vector<string> splitString(string str, const char* delimitters);

string basename(string path);

string stripExt(string filename);

bool isNumeric(const std::string& s);

void print_color(int colors);

string toLowerCase(string str);

string trimSpaces(string s);
