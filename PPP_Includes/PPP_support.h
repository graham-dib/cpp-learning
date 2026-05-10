#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <stdexcept>
#include <sstream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <cassert>

using namespace std;

inline string simple_error(const string& s)
{
    return "Error: " + s;
}

inline void error(const string& s)
{
    throw runtime_error(s);
}

inline void error(const string& s, const string& s2)
{
    error(s + s2);
}