#include "test_sentence_palindrome.hpp"
#include "sentence_palindrome.hpp"

TestSentencePalindromeNew::TestSentencePalindromeNew() : Test("Test sentence_palindrome_new") {};

void TestSentencePalindromeNew::run() {
    SentencePalindrome *sentence_palindrome = sentence_palindrome_new("Hello World");
    assert(sentence_palindrome != nullptr);
    assert(sentence_palindrome->sentence->text == "Hello World");
    sentence_palindrome = sentence_palindrome_free(sentence_palindrome);
};

TestSentencePalindromeFree::TestSentencePalindromeFree() : Test("Test sentence_palindrome_free") {};

void TestSentencePalindromeFree::run() {
    SentencePalindrome *sentence_palindrome = sentence_palindrome_new("Hello World");
    sentence_palindrome = sentence_palindrome_free(sentence_palindrome);
    assert(sentence_palindrome == nullptr);
};

TestSentencePalindromeIsPalindrome::TestSentencePalindromeIsPalindrome() : Test("Test sentence_is_palindrome") {};

void TestSentencePalindromeIsPalindrome::run() {
    SentencePalindrome *non_palindrome = sentence_palindrome_new("Hello World");
    assert(sentence_is_palindrome(non_palindrome) == false);
    non_palindrome = sentence_palindrome_free(non_palindrome);
    SentencePalindrome *palindrome = sentence_palindrome_new("A man, a plan, a canal, Panama!");
    assert(sentence_is_palindrome(palindrome) == true);
    palindrome = sentence_palindrome_free(palindrome);
};
