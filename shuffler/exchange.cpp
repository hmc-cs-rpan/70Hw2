/**
 * \file exchange.cpp
 * \Daniel Zhang, Ricky Pan
 *
 * \brief
 *   Implements exchange. See exchange.hpp for function
 *   descriptions.
 */

#include <string>
#include <iostream>
#include "exchange.hpp"
using namespace std;

Exchange::Exchange()
{
	// Nothing else to do.
}

void exchange(string& s1, string& s2)
{
	string holder = s1;        // Create variable to store the value of s1
	s1 = s2;                   
	s2 = holder;               // Sets s2 to the original value of s1
}

// we commented this main call out because shuffle called main

// int main() 
// {
//     string s1 = "second";
//     string s2 = "first";
//     exchange(s1, s2);
//     cout << s1 << endl;
//     cout << s2 << endl;
//     return 0; 
// }
