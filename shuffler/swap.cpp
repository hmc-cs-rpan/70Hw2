/**
 * \file swap.cpp
 * \Daniel Zhang, Ricky Pan
 *
 * \brief
 *   Implements swap. See swap.hpp for function
 *   descriptions.
 */

#include <string>
#include <iostream>
#include "swap.hpp"
using namespace std;

Swap::Swap(string s1_, string s2_)
{
	string s1_;
	string s2_;
}

void Swap::exchange()
{
	string holder = s1_;
	s1_ = s2_;
	s2_ = holder;
}

int main() 
{
    string s1 = "second";
    string s2 = "first";
    Swap toChange = new Swap(s1,s2);
    toChange.exchange();
    cout << s1 << endl;
    cout << s2 << endl;
    return 0; 
}