#include <string>
#include <iostream>
#include "exchange.hpp"
using namespace std;

int main() 
{
	Exchange test_;
    string s1 = "second";
    string s2 = "first";
    test_.exchange(s1, s2);
    cout << s1 << endl;
    cout << s2 << endl;
    return 0; 
}