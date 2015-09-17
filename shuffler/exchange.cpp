/**
 * \file exchange.cpp
 * \Daniel Zhang, Ricky Pan
 *
 * \brief
 *   Defines exchange. See exchange.hpp for function
 *   descriptions.
 */

#include <string>
#include <iostream>
#include "exchange.hpp"
using namespace std;

void exchange(string& s1, string& s2)
{
    string holder = s1;        // Create variable to store the value of s1
    s1 = s2;                   
    s2 = holder;               // Sets s2 to the original value of s1
}
