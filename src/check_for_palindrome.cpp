#include <iostream>
#include <string>
#include <algorithm>
#include "command_line_interface.hpp"
#include "flip_string.hpp"

int main(int argc, char **argv) {
    CommandLineInterface cli(argc, argv);
    CLIParser parser(cli);
    FlipString flipper(parser.parse());
    if (flipper.word().compare(flipper.flip_word()) == 0) {
        cli.say_word_is_palindrome(flipper.word());
    }
    else {
        cli.say_word_is_not_palindrome(flipper.word());
    }
    return 0;
}
