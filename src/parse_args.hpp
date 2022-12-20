#ifndef PARSE_ARGS_HPP
#define PARSE_ARGS_HPP

#include <string>
#include <vector>

typedef struct {
    std::string name;
    std::string description;
    std::string value;
    bool is_required;
} Argument;

typedef struct {
    std::string name;
    std::string description;
    std::vector<Argument> arguments;
} Command;

typedef struct {
    std::string name;
    std::string description;
    std::vector<Command> commands;
} Program;

Program *program_new(std::string name, std::string description);
Program *program_free(Program *program);
void program_add_command(Program *program, Command command);
void program_print_help(Program *program);
void program_parse_args(Program *program, int argc, const char **argv);

#endif // PARSE_ARGS_HPP
