#ifndef TEST_POEM_PALINDROME_HPP
#define TEST_POEM_PALINDROME_HPP

#include "test_suite.hpp"

class TestPoemNew : public Test {
public:
    TestPoemNew();
    void run();
};

class TestPoemFree : public Test {
public:
    TestPoemFree();
    void run();
};

class TestLinePoemIsPalindrome : public Test {
public:
    TestLinePoemIsPalindrome();
    void run();
};

class TestWordPoemIsPalindrome : public Test {
public:
    TestWordPoemIsPalindrome();
    void run();
};

class TestPoemIsPalindrome : public Test {
public:
    TestPoemIsPalindrome();
    void run();
};

#endif // TEST_POEM_PALINDROME_HPP
