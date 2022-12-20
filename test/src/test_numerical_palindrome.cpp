#include "test_numerical_palindrome.hpp"
#include "numerical_palindrome.hpp"

TestNumericalPalindromeNew::TestNumericalPalindromeNew() : Test("Test numerical_palindrome_new") {};

void TestNumericalPalindromeNew::run() {
    NumericalPalindrome *palindrome = numerical_palindrome_new(12321);
    assert(palindrome != nullptr);
    assert(palindrome->number == 12321);
    palindrome = numerical_palindrome_free(palindrome);
};

TestNumericalPalindromeFree::TestNumericalPalindromeFree() : Test("Test numerical_palindrome_free") {};

void TestNumericalPalindromeFree::run() {
    NumericalPalindrome *palindrome = numerical_palindrome_new(12321);
    palindrome = numerical_palindrome_free(palindrome);
    assert(palindrome == nullptr);
};

TestNumericalPalindromeIsPalindrome::TestNumericalPalindromeIsPalindrome() : Test("Test numerical_palindrome_is_palindrome") {};

void TestNumericalPalindromeIsPalindrome::run() {
    NumericalPalindrome *palindrome = numerical_palindrome_new(12321);
    assert(numerical_palindrome_is_palindrome(palindrome) == true);
    palindrome = numerical_palindrome_free(palindrome);
    NumericalPalindrome *palindrome2 = numerical_palindrome_new(12345);
    assert(numerical_palindrome_is_palindrome(palindrome2) == false);
    palindrome2 = numerical_palindrome_free(palindrome2);
};
