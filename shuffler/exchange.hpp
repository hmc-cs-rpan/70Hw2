/**
 * \file exchange.hpp
 * \Daniel Zhang, Ricky Pan	
 *
 * \brief Interface definition for exchange.
 */

#ifndef EXCHANGE_HPP_INCLUDED
#define EXCHANGE_HPP_INCLUDED 1

#include <vector>
#include <string>

using namespace std;

class Exchange{
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
     Exchange();
    // ****************
    // MEMBER FUNCTIONS
    // ****************

     /**
     * \brief
     *     Interchange the values of two strings.
     *
     * \pre Takes two string arguments
     * \returns None
     * \post The values of the strings should have swapped
     */

     void exchange(string& s1, string& s2);

// private:

//     Exchange(const Exchange&);
//     Exchange& operator=(const Exchange& rhs);

};

#endif // EXCHANGE_HPP_INCLUDED