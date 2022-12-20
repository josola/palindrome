#ifndef TEST_TEXT_PALINDROME_HPP
#define TEST_TEXT_PALINDROME_HPP

#include "test_suite.hpp"

class TestTextNew : public Test {
public:
    TestTextNew();
    void run();
};

class TestTextFree : public Test {
public:
    TestTextFree();
    void run();
};

class TestTextIsPalindrome : public Test {
public:
    TestTextIsPalindrome();
    void run();
};

#endif // TEST_TEXT_PALINDROME_HPP