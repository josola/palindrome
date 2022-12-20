#ifndef TEST_PARSE_ARGS_HPP
#define TEST_PARSE_ARGS_HPP

#include "test_suite.hpp"

class TestProgramNew : public Test {
    public:
        TestProgramNew();
        void run();
};

class TestProgramFree : public Test {
    public:
        TestProgramFree();
        void run();
};

class TestProgramAddCommand : public Test {
    public:
        TestProgramAddCommand();
        void run();
};

class TestProgramPrintHelp : public Test {
    public:
        TestProgramPrintHelp();
        void run();
};

class TestProgramParseArgs : public Test {
    public:
        TestProgramParseArgs();
        void run();
};

#endif // TEST_PARSE_ARGS_HPP