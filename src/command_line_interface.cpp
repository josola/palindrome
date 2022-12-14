#include <iostream>
#include "command_line_interface.hpp"

int CommandLineInterface::argc() const {
    return argc_;
}

char **CommandLineInterface::argv() const {
    return argv_;
}

std::string CLIParser::parse() {
    if (cli_.argc() != 2) {
        std::cout << "Usage: " << cli_.argv()[0] << " <string> \n";
        exit(1);
    }
    std::string input = cli_.argv()[1];
    return input;
}
