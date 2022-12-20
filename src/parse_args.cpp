#include "parse_args.hpp"

#include <iostream>

Program *program_new(std::string name, std::string description) {
    Program *p = (Program *)malloc(sizeof(Program));
    p->name = name;
    p->description = description;
    return p;
}

Program *program_free(Program *program) {
    free(program);
    return nullptr;
}

void program_add_command(Program *program, Command command) {
    program->commands.push_back(command);
}

void program_print_help(Program *program) {
    std::cout << "Usage: " << program->name << " [command] [arguments]" << std::endl;
    std::cout << std::endl;
    std::cout << program->description << std::endl;
    std::cout << std::endl;
    std::cout << "Commands:" << std::endl;
    for (int i = 0; i < program->commands.size(); i++) {
        std::cout << "  " << program->commands[i].name << " - " << program->commands[i].description << std::endl;
    }
}

void program_parse_args(Program *program, int argc, const char **argv) {
    if (argc < 2) {
        program_print_help(program);
        exit(1);
    }
}
