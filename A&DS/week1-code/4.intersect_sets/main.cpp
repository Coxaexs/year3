#include <iostream>
#include <vector>
#include "utils.h"
//#include <unordered_set> they are sorted soo

std::vector<int> intersect(const std::vector<int> &arr1, const std::vector<int> &arr2);
int main() {
    // TODO: write a program that receives two vectors of integers as arguments over stdin
    // You may assume that the vectors are sorted in non-decreasing order, and that all
    // elements are unique.
    //
    // The program must construct the intersection of the two vectors and write the resulting
    // vector to stdout.
    // REQUIREMENT: the algorithm to compute the intersection must run in O(n + m) time
    //  (where n and m are the sizes of the input vectors)
    // Use the two-pointer technique to achieve this result!

    // See the utils.h file for writing / reading vectors
    std::vector<int> array{};

    // the string to hold the command to read

    // the integer following the command
    std::vector<int> array2{};

    // get the input
    std::cin >> array >> array2;
    auto result = intersect(array, array2);
    std::cout<<result<<std::endl;
        
}

std::vector<int> intersect(const std::vector<int> &arr1, const std::vector<int> &arr2)
{
    std::vector<int> res;
    size_t left = 0;
    size_t right = 0;
    while (left < arr1.size() && right < arr2.size())
    {
        if (arr1.at(left) == arr2.at(right))
        {
            res.push_back(arr1.at(left));
            left++;
            right++;
        }
        else if (arr1.at(left) > arr2.at(right))
        {
            right++;
        }
        else
        {
            left++;
        }
        
        
    }
    

    return res;
}
