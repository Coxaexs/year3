#include <iostream>
#include <vector>
#include "utils.h"

void partition(std::vector<int> &array, int number);

int main() {
    // TODO: write a program that receives three arguments over stdin, separated by spaces:
    // a vector of integers, followed by the word "move" and an integer
    // The program must partition the array so that all occurences of the integer
    // are placed at the end of the array.
    // Use the two-pointer technique and element swapping for this
    // See the utils.h file for writing / reading vectors

    // setup an empty vector of integers
    std::vector<int> array{};

    // the string to hold the command to read
    std::string command;

    // the integer following the command
    int number;

    // get the input
    std::cin >> array >> command >> number;
    partition(array, number);
    std::cout<<array;
}

void partition(std::vector<int> &array, int number)
{
    size_t placement = 0;
    for (size_t scanning = 0; scanning < array.size(); scanning++)
    {
        if (array.at(scanning) != number)
        {
            std::swap(array.at(scanning), array.at(placement));
            placement++;
        }
        
    }
}
