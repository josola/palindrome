#include <iostream>
#include <string>
#include <algorithm>
#include "command_line_interface.hpp"

int main(int argc, char **argv)
{
    CommandLineInterface cli(argc, argv);
    CLIParser parser(cli);
    std::string word = parser.parse();
    std::string flipped_word = word;
    std::reverse (begin(flipped_word), end(flipped_word));
    if (word.compare(flipped_word) == 0) {
        std::cout << word << " is " << flipped_word << " backwards.\n";
    }
    else {
        std::cout << word << " is not a palindrome.\n";
    }
    return 0;
}
