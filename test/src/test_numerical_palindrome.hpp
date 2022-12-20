#ifndef TEST_NUMERICAL_PALINDROME_HPP
#define TEST_NUMERICAL_PALINDROME_HPP

#include "test_suite.hpp"

class TestNumericalPalindromeNew : public Test {
public:
    TestNumericalPalindromeNew();
    void run();
};

class TestNumericalPalindromeFree : public Test {
public:
    TestNumericalPalindromeFree();
    void run();
};

class TestNumericalPalindromeIsPalindrome : public Test {
public:
    TestNumericalPalindromeIsPalindrome();
    void run();
};

#endif // TEST_NUMERICAL_PALINDROME_HPP