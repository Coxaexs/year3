#include <iostream>
#include <vector>
#include "utils.h"

// Function prototype - you must implement this function
/// @brief Subtracts set b from set a, modifying a in place.
/// @param a First set (will be modified to contain the result)
/// @param b Second set (will not be modified)
void subtract_sets_inplace(std::vector<int>& a, const std::vector<int>& b);

int main() {
    // TODO: write a program that receives two vectors of integers as arguments over stdin
    // You may assume that the vectors are sorted in non-decreasing order, and that all
    // elements are unique.
    //
    // The program must subtract the second vector from the first vector and write the resulting
    // vector to stdout.
    // REQUIREMENT (1): the algorithm to compute the subtraction must run in O(n + m) time
    //  (where n and m are the sizes of the input vectors)
    // REQUIREMENT (2): the algorithm must modify the first vector in place
    //  Use the provided function prototype for this
    // Use the two-pointer technique to achieve this result!

    // See the utils.h file for writing / reading vectors
         std::vector<int> array{};

    // the string to hold the command to read

    // the integer following the command
    std::vector<int> array2{};

    // get the input
    std::cin >> array >> array2;
    subtract_sets_inplace(array, array2);
    std::cout<<array<<std::endl;
}

void subtract_sets_inplace(std::vector<int> &a, const std::vector<int> &b)
{
    
    std::vector<int> res;
    size_t write_pointer = 0;
    size_t left = 0;
    size_t right = 0;
    while (left < a.size())
    {
        if (right == b.size())
        {
            a[write_pointer] = a.at(left);
            write_pointer++;
            //res.push_back(a.at(left));
            left++;
        }
        
        else if (a.at(left) == b.at(right))
        {
            left++;
            if (right < b.size())
            {
                right++;   
            }
            
        }
        else if (a.at(left) < b.at(right))
        {
            a[write_pointer] = a.at(left);
            write_pointer++;
            //res.push_back(a.at(left));
            left++;
        }
        else if (a.at(left) > b.at(right))
        {
            right++;
        }
    }
    a.resize(write_pointer);
}
