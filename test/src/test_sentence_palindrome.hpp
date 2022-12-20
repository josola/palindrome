#ifndef TEST_SENTENCE_PALINDROME_HPP
#define TEST_SENTENCE_PALINDROME_HPP

#include "test_suite.hpp"

class TestSentencePalindromeNew : public Test {
public:
    TestSentencePalindromeNew();
    void run();
};

class TestSentencePalindromeFree : public Test {
public:
    TestSentencePalindromeFree();
    void run();
};

class TestSentencePalindromeIsPalindrome : public Test {
public:
    TestSentencePalindromeIsPalindrome();
    void run();
};

#endif // TEST_SENTENCE_PALINDROME_HPP