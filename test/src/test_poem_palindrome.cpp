#include <iostream>

#include "test_poem_palindrome.hpp"
#include "poem_palindrome.hpp"

TestPoemNew::TestPoemNew() : Test("Test poem_new") {};

void TestPoemNew::run() {
    Poem *poem = poem_new("./resources/poem.txt");
    assert(poem != nullptr);
    assert(poem->filename == "poem.txt");
    poem = poem_free(poem);
};

TestPoemFree::TestPoemFree() : Test("Test poem_free") {};

void TestPoemFree::run() {
    Poem *poem = poem_new("./resources/poem.txt");
    poem = poem_free(poem);
    assert(poem == nullptr);
};

TestLinePoemIsPalindrome::TestLinePoemIsPalindrome() : Test("Test line_poem_is_palindrome") {};

void TestLinePoemIsPalindrome::run() {
    Poem *line_poem = poem_new("./resources/line_palindrome_poem.txt");
    assert(line_poem_is_palindrome(line_poem) == true);
    line_poem = poem_free(line_poem);
    Poem *word_poem = poem_new("./resources/word_palindrome_poem.txt");
    assert(line_poem_is_palindrome(word_poem) == false);
    word_poem = poem_free(word_poem);
    Poem *not_palindrome_poem = poem_new("./resources/poem.txt");
    assert(line_poem_is_palindrome(not_palindrome_poem) == false);
    not_palindrome_poem = poem_free(not_palindrome_poem);
};

TestWordPoemIsPalindrome::TestWordPoemIsPalindrome() : Test("Test word_poem_is_palindrome") {};

void TestWordPoemIsPalindrome::run() {
    Poem *line_poem = poem_new("./resources/line_palindrome_poem.txt");
    assert(word_poem_is_palindrome(line_poem) == false);
    line_poem = poem_free(line_poem);
    Poem *word_poem = poem_new("./resources/word_palindrome_poem.txt");
    assert(word_poem_is_palindrome(word_poem) == true);
    word_poem = poem_free(word_poem);
    Poem *not_palindrome_poem = poem_new("./resources/poem.txt");
    assert(word_poem_is_palindrome(not_palindrome_poem) == false);
    not_palindrome_poem = poem_free(not_palindrome_poem);
};

TestPoemIsPalindrome::TestPoemIsPalindrome() : Test("Test poem_is_palindrome") {};

void TestPoemIsPalindrome::run() {
    Poem *line_poem = poem_new("./resources/line_palindrome_poem.txt");
    assert(poem_is_palindrome(line_poem) == true);
    line_poem = poem_free(line_poem);
    Poem *word_poem = poem_new("./resources/word_palindrome_poem.txt");
    assert(poem_is_palindrome(word_poem) == true);
    word_poem = poem_free(word_poem);
    Poem *not_palindrome_poem = poem_new("./resources/poem.txt");
    assert(poem_is_palindrome(not_palindrome_poem) == false);
    not_palindrome_poem = poem_free(not_palindrome_poem);
};
