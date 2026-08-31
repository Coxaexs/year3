#include <iostream>
#include <vector>
#include "utils.h"

size_t binary_search(const std::vector<int>& vec, int value) {
    (void) vec;
    (void) value;

    // TODO: implement (and use) this function!
    return 0;
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

        // output the vector
        std::cout << array << std::endl;
    }
    else if (command == "remove") {
        // TODO: remove number from array (if it's there)

        // output the vector
        std::cout << array << std::endl;
    }
    else if (command == "contains") {
        // TODO: find out if number is contained in array, in O(log n) time
        
        // TODO: output true or false
        bool result = false;
        std::cout << std::boolalpha << result << std::endl;
    }
}
