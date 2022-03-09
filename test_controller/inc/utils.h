#ifndef UTILS_H
#define UTILS_H

#include <sys/time.h>

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "definition.h"

using namespace std;

vector<string> splitStr(string &str);
bool Str2Unsint(const string &str, unsigned &unsint);
bool Str2LongInt(const string &str, long &);
long getsystime();                          // Uint: ms
uint16_t getELBright(const double &alpha);  // alpha: 0, 0.1, 0.2, ... , 1
int rgbHexInterpolate(int hex1, int hex2, const float &rate);

#endif