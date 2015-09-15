/**
 * \file lineshuffler.cpp
 * \Daniel Zhang, Ricky Pan CS 70 Provided Code
 *
 * \brief
 *   Implements LineShuffler. See lineshuffler.hpp for function
 *   descriptions.
 */

#include "lineshuffler.hpp"

using namespace std;

LineShuffler::LineShuffler()
{
    // Nothing else to do.
}


string LineShuffler::removeLine()
{
    string firstLine = lines_[0];

    // Delete the first string and move the other strings up.
    lines_.erase(lines_.begin());

    return firstLine;
}


void LineShuffler::addLine(string line)
{
    lines_.push_back(line);
}


bool LineShuffler::isEmpty() const
{
    return lines_.size() == 0;
}

void Exchange::exchange(string& s1, string& s2)
{
    string holder = s1;        // Create variable to store the value of s1
    s1 = s2;                   
    s2 = holder;               // Sets s2 to the original value of s1
}

void LineShuffler::shuffle()
{
    int size = lines_.size();

    for(int i=0; i < size; i++){        // chooses ith line and a random
                                        // line and exchanges the two
        string& currentLine = lines_[i];

        int randomRow = rnd_.next(size);    // chooses a random number
                                            // between 0 and size-1
        string& randomLine = lines_[randomRow];

        exc_.exchange(currentLine, randomLine);

    }
}


/* (Junk to make emacs use a specific indentation style)
 * Local Variables:
 * c-file-style: "stroustrup"
 * End:
 */
