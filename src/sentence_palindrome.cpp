#include <algorithm>
#include <iostream>

#include "sentence_palindrome.hpp"

SentencePalindrome *sentence_palindrome_new(std::string sentence) {
    SentencePalindrome *new_sentence_palindrome = new SentencePalindrome;
    new_sentence_palindrome->sentence = sentence_new(sentence);
    return new_sentence_palindrome;
}

SentencePalindrome *sentence_palindrome_free(SentencePalindrome *sentence_palindrome) {
    sentence_palindrome->sentence = sentence_free(sentence_palindrome->sentence);
    free(sentence_palindrome);
    return nullptr;
}

bool sentence_is_palindrome(SentencePalindrome *sentence_palindrome) {
    std::string sentence = "";
    for (std::string word : sentence_palindrome->sentence->words) {
        sentence += word;
    }
    sentence.erase(std::remove_if(sentence.begin(), sentence.end(), ::ispunct), sentence.end());
    std::transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);
    sentence.erase(std::remove(sentence.begin(), sentence.end(), ' '), sentence.end());
    std::string reversed_sentence = sentence;
    std::reverse(reversed_sentence.begin(), reversed_sentence.end());
    return sentence == reversed_sentence;
}
