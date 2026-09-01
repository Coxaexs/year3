#include <iostream>
#include <vector>
#include "utils.h"

size_t binary_search(const std::vector<int>& vec, int value) {
    int low = 0;
    int high = vec.size();
    
    while (low < high) {
        size_t mid = low + (high - low) / 2;
        if (vec[mid] == value)
        {
            return mid;
        }
        else if (vec[mid] < value)
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    // TODO: implement (and use) this function!
    return low;
}

int main() {
    // TODO: write a program that receives three arguments (through stdin):
    // a vector of integers, followed by a command ("insert", "remove" or "contains") and an integer
    // 
    // The output of the program must:
    //  if command is "insert" or "remove": the modified vector after applying the command
    //  if command is "contains": "true" (or "false") if the vector contains the element (or not)
    //
    // See the utils.h file for writing / reading vectors

    // setup an empty vector of integers
    std::vector<int> array{};

    // the string to hold the command to read
    std::string command;

    // the integer following the command
    int number;

    // get the input
    std::cin >> array >> command >> number;

    if (command == "insert") {
        // TODO: insert number into array so that it remains sorted

        //ok here we go, first, let's find the element and then just insert there, since it can only be O(n)
        //I cant traverse to find and then add.
        auto index = binary_search(array, number);
        //I mean, I assume that I can use insert, but otherwise I'd just create a temporary vector.
        //or better, I'd also create a temp vector and push there and check if the value is higher than
        //this and lower than next, and if so I'd push the number and keep going.
        //but the assignment said use binary search, so here we are!
         if (array.empty())
        {
            array.insert(array.begin() + index, number);
        }
        else if (array[index] != number)
        {
            array.insert(array.begin() + index, number);
        }

        
        // output the vector
        std::cout << array << std::endl;
    }
    else if (command == "remove") {
        // TODO: remove number from array (if it's there)
        auto index = binary_search(array, number);
        if (!array.empty() && index < array.size() && array[index] == number)
        {

            array.erase(array.begin() + index);
        }

        // output the vector
        std::cout << array << std::endl;
    }
    else if (command == "contains") {
        // TODO: find out if number is contained in array, in O(log n) time
        auto index = binary_search(array, number);
        // TODO: output true or false
        bool result = false;
        if (!array.empty() && array[index] == number)
        {
            result = true;
        }
        
        std::cout << std::boolalpha << result << std::endl;
    }
}
