# Week XXXXX

## Assignment YY - the quick brown fox jumps over the lazy dog

My code:

```cpp
// fancy algorithm here
#include <iostream>
#include <vector>
#include "utils.h"

size_t binary_search(const std::vector<int>& vec, int value) {
    size_t lo = 0, hi = vec.size();
    while (lo < hi) {
        size_t mid = lo + (hi - lo) / 2;
        if (vec[mid] == value) return mid;
        else if (vec[mid] > value) hi = mid;
        else lo = mid + 1;
    }
    return lo;
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
        size_t index = binary_search(array, number);
        if (index == array.size() || array[index] != number) {
            // insert & shift
            array.insert(array.begin() + index, number);
        }

        // output the vector
        std::cout << array << std::endl;
    }
    else if (command == "remove") {
        // TODO: remove number from array (if it's there)
        size_t index = binary_search(array, number);
        if (index < array.size() && array[index] == number) {
            // remove
            array.erase(array.begin() + index);
        }

        // output the vector
        std::cout << array << std::endl;
    }
    else if (command == "contains") {
        // TODO: find out if number is contained in array, in O(log n) time
        size_t index = binary_search(array, number);
        auto result = index < array.size() && array[index] == number;

        // TODO: output true or false
        std::cout << std::boolalpha << result << std::endl;
    }
}

```

Time complexity: this algorithm has a time complexity of ....., because ......

## Assignment ZZ - the quick brown fox jumps over the lazy dog

My code:

```cpp
// fancy algorithm here
```

Time complexity: this algorithm has a time complexity of ....., because ......

## Assignment AA - brace yourselves, winter is coming

My code:

```cpp
// fancy algorithm here
```

Time complexity: this algorithm has a time complexity of ....., because ......

