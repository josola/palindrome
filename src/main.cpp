#include <iostream>

#include "parse_args.hpp"
#include "text_palindrome.hpp"
#include "numerical_palindrome.hpp"

int main(int argc, char *argv[]) {
    Program *program = program_new("palindrome", "Check if a text or number is a palindrome");
    Command help_command = {
        .name = "help",
        .description = "Show the help message",
        .arguments = {}
    };
    program_add_command(program, help_command);
    Command text_command = {
        .name = "text",
        .description = "Check if a text is a palindrome",
        .arguments = {
            {
                .name = "text",
                .description = "The text to check",
                .value = "",
                .is_required = true
            }
        }
    };
    program_add_command(program, text_command);
    Command number_command = {
        .name = "number",
        .description = "Check if a number is a palindrome",
        .arguments = {
            {
                .name = "number",
                .description = "The number to check",
                .value = "",
                .is_required = true
            }
        }
    };
    program_add_command(program, number_command);
    program_parse_args(program, argc, argv);
    std::string command = argv[1];
    if (command == "text") {
        std::string text = argv[2];
        Text *text_palindrome = text_new(text);
        if (text_is_palindrome(text_palindrome)) {
            std::cout << "The text '" << text << "' is a palindrome" << std::endl;
        } else {
            std::cout << "The text '" << text << "' is not a palindrome" << std::endl;
        }
        text_free(text_palindrome);
    } else if (command == "number") {
        int number = std::stoi(argv[2]);
        NumericalPalindrome *numerical_palindrome = numerical_palindrome_new(number);
        if (numerical_palindrome_is_palindrome(numerical_palindrome)) {
            std::cout << "The number '" << number << "' is a palindrome" << std::endl;
        } else {
            std::cout << "The number '" << number << "' is not a palindrome" << std::endl;
        }
        numerical_palindrome_free(numerical_palindrome);
    } else {
        program_print_help(program);
    }
    program_free(program);
    return 0;
}