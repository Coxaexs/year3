#include <iostream>
#include <vector>
#include "utils.h"

int main() {
    // TODO: write a program that receives two arguments over stdin, separated by spaces:
    // a vector of integers, followed by an integer to search for
    //
    // The program MUST use binary search to find the first occurrence of the integer
    // and return its index. If the integer is not found, it should return the index
    // at which the value should be inserted to maintain sorted order.

    // See the utils.h file for writing / reading vectors

    std::vector<int> array{};

    // the integer to lookup
    int number;

    // get the input
    std::cin >> array >> number;

    // TODO: print the index of the first occurrence of the integer if it was found,
    //       or, if it was not found, the index at which the number should be inserted
    //       to maintain sorted order
}
