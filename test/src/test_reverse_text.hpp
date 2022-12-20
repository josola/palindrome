#ifndef TEST_REVERSE_TEXT_HPP
#define TEST_REVERSE_TEXT_HPP

#include "test_suite.hpp"

class TestReverseTextNew : public Test {
public:
    TestReverseTextNew();
    void run();
};

class TestReverseTextFree : public Test {
public:
    TestReverseTextFree();
    void run();
};

class TestReverseTextGet : public Test {
public:
    TestReverseTextGet();
    void run();
};

#endif // TEST_REVERSE_TEXT_HPP