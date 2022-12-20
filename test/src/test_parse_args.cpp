#include "test_parse_args.hpp"
#include "parse_args.hpp"

TestProgramNew::TestProgramNew() : Test("Test program_new") {};

void TestProgramNew::run() {
    Program *program = program_new("test", "Test program");
    assert(program != nullptr);
    assert(program->name == "test");
    assert(program->description == "Test program");
    program = program_free(program);
};

TestProgramFree::TestProgramFree() : Test("Test program_free") {};

void TestProgramFree::run() {
    Program *program = program_new("test", "Test program");
    program = program_free(program);
    assert(program == nullptr);
};

TestProgramAddCommand::TestProgramAddCommand() : Test("Test program_add_command") {};

void TestProgramAddCommand::run() {
    Program *program = program_new("test", "Test program");
    Command command;
    command.name = "test";
    command.description = "Test command";
    program_add_command(program, command);
    assert(program->commands.size() == 1);
    assert(program->commands[0].name == "test");
    assert(program->commands[0].description == "Test command");
    program = program_free(program);
};

TestProgramPrintHelp::TestProgramPrintHelp() : Test("Test program_print_help") {};

void TestProgramPrintHelp::run() {
    Program *program = program_new("test", "Test program");
    Command command;
    command.name = "test";
    command.description = "Test command";
    program_add_command(program, command);
    program_print_help(program);
    program = program_free(program);
};

TestProgramParseArgs::TestProgramParseArgs() : Test("Test program_parse_args") {};

void TestProgramParseArgs::run() {
    Program *program = program_new("test", "Test program");
    Command command;
    command.name = "test";
    command.description = "Test command";
    Argument argument;
    argument.name = "test";
    argument.description = "Test argument";
    argument.is_required = true;
    command.arguments.push_back(argument);
    program_add_command(program, command);
    const char *argv[] = {"test", "test", "--test", "test"};
    program_parse_args(program, 4, argv);
    assert(program->commands[2].arguments[0].name == "test");
    program = program_free(program);
};
