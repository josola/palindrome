//palindrome_checkr.cpp
//Program that checks for input string palindromes
//Written by Jordan Sola 2020

#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string input = " ";

    std::cout << "Input your palindrome: \n";
    std::getline (std::cin, input);

    std::string rvrs_inpt = input;
    std::reverse (begin(rvrs_inpt), end(rvrs_inpt));

    if (input.compare(rvrs_inpt) == 0) {
        std::cout << input << " is " << rvrs_inpt << " backwards.\n";
    }
    else {
        std::cout << input << " is not a palindrome.\n";
    }

    return 0;
}