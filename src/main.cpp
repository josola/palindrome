#include <iostream>

#include "parse_args.hpp"
#include "text_palindrome.hpp"
#include "numerical_palindrome.hpp"
#include "sentence_palindrome.hpp"
#include "poem_palindrome.hpp"

int main(int argc, const char *argv[]) {
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
    Command poem_command = {
        .name = "poem",
        .description = "Check if a poem is a palindrome",
        .arguments = {
            {
                .name = "file_path",
                .description = "The path to the poem file",
                .value = "",
                .is_required = true
            }
        }
    };
    program_add_command(program, poem_command);
    Command sentence_commane = {
        .name = "sentence",
        .description = "Check if a sentence is a palindrome",
        .arguments = {
            {
                .name = "sentence",
                .description = "The sentence to check",
                .value = "",
                .is_required = true
            }
        }
    };
    program_add_command(program, sentence_commane);
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
        text_palindrome = text_free(text_palindrome);
    } else if (command == "sentence") {
        std::string sentence = "";
        for (int i = 2; i < argc; i++) {
            sentence += argv[i];
            if (i != argc - 1) {
                sentence += " ";
            }
        }
        SentencePalindrome *sentence_palindrome = sentence_palindrome_new(sentence);
        if (sentence_is_palindrome(sentence_palindrome)) {
            std::cout << "The sentence '" << sentence << "' is a palindrome" << std::endl;
        } else {
            std::cout << "The sentence '" << sentence << "' is not a palindrome" << std::endl;
        }
        sentence_palindrome = sentence_palindrome_free(sentence_palindrome);
    } else if (command == "poem") {
        std::string file_path = argv[2];
        Poem *poem = poem_new(file_path);
        if (poem_is_palindrome(poem)) {
            std::cout << "The poem '" << file_path << "' is a palindrome" << std::endl;
        } else {
            std::cout << "The poem '" << file_path << "' is not a palindrome" << std::endl;
        }
        poem = poem_free(poem);
    } else if (command == "number") {
        int number = std::stoi(argv[2]);
        NumericalPalindrome *numerical_palindrome = numerical_palindrome_new(number);
        if (numerical_palindrome_is_palindrome(numerical_palindrome)) {
            std::cout << "The number '" << number << "' is a palindrome" << std::endl;
        } else {
            std::cout << "The number '" << number << "' is not a palindrome" << std::endl;
        }
        numerical_palindrome = numerical_palindrome_free(numerical_palindrome);
    } else {
        program_print_help(program);
    }
    program = program_free(program);
    return 0;
}