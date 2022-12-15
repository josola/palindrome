#include <iostream>
#include <sstream>

#include "get_sentence.hpp"

Sentence *sentence_new(std::string sentence) {
    Sentence *new_sentence = new Sentence;
    std::istringstream iss(sentence);
    std::string word;
    while (iss >> word) {
        new_sentence->words.push_back(word);
    }
    return new_sentence;
}

void sentence_free(Sentence *sentence) {
    free(sentence);
}
