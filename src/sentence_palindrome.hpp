#ifndef SENTENCE_PALINDROME_HPP
#define SENTENCE_PALINDROME_HPP

#include "get_sentence.hpp"

typedef struct {
    Sentence *sentence;
} SentencePalindrome;

SentencePalindrome *sentence_palindrome_new(std::string sentence);
void sentence_palindrome_free(SentencePalindrome *sentence_palindrome);
bool sentence_is_palindrome(SentencePalindrome *sentence_palindrome);

#endif // SENTENCE_PALINDROME_HPP
