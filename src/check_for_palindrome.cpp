//palindrome_checkr.cpp
//Program that checks for input string palindromes
//Written by Jordan Sola 2020

#include <iostream>
#include <string>
#include <algorithm>

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " <string> \n";
        return 1;
    }
    std::string input = argv[1];
    std::string flipped_word = argv[1];
    std::reverse (begin(flipped_word), end(flipped_word));
    if (input.compare(flipped_word) == 0) {
        std::cout << input << " is " << flipped_word << " backwards.\n";
    }
    else {
        std::cout << input << " is not a palindrome.\n";
    }
    return 0;
}