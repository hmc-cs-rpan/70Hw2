/**
 * \file swap.hpp
 * \Daniel Zhang, Ricky Pan	
 *
 * \brief Interface definition for swap.
 */

#ifndef SWAP_HPP_INCLUDED
#define SWAP_HPP_INCLUDED 1

#include <vector>
#include <string>

using namespace std;

class Swap{
public:

	// ************
    // CONSTRUCTORS
    // ************

    /**
     * \brief Initializes the object to empty
     *
     * \pre None.
     * \post The object will contain no strings.
     */
     Swap();
     string s1_;
     string s2_;
    // ****************
    // MEMBER FUNCTIONS
    // ****************

     /**
     * \brief
     *     Interchange the values of two strings.
     *
     * \pre Object should have two strings
     * \returns None
     * \post The values of the strings should have swapped
     */

     void exchange();

};

#endif // LINESHUFFLER_HPP_INCLUDED