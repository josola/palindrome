#include "test_text_palindrome.hpp"
#include "text_palindrome.hpp"

TestTextNew::TestTextNew() : Test("Test text_new") {};

void TestTextNew::run() {
    Text *text = text_new("Hello World");
    assert(text != nullptr);
    assert(text->text == "Hello World");
    text = text_free(text);
};

TestTextFree::TestTextFree() : Test("Test text_free") {};

void TestTextFree::run() {
    Text *text = text_new("Hello World");
    text = text_free(text);
    assert(text == nullptr);
};

TestTextIsPalindrome::TestTextIsPalindrome() : Test("Test text_is_palindrome") {};

void TestTextIsPalindrome::run() {
    Text *non_palindrome = text_new("Hello World");
    assert(text_is_palindrome(non_palindrome) == false);
    non_palindrome = text_free(non_palindrome);
    Text *palindrome = text_new("racecar");
    assert(text_is_palindrome(palindrome) == true);
    palindrome = text_free(palindrome);
};
