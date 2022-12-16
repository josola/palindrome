#include "poem_palindrome.hpp"
#include "get_sentence.hpp"

#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>

Poem *poem_new(std::string file_path) {
    Poem *poem = new Poem;
    std::vector<Sentence *> sentences;
    std::ifstream file(file_path);
    std::string line;
    while (std::getline(file, line)) {
        Sentence *sentence = sentence_new(line);
        sentences.push_back(sentence);
    }
    for (int i = 0; i < sentences.size(); i++) {
        std::string sentence = sentences[i]->sentence;
        sentence.erase(std::remove_if(sentence.begin(), sentence.end(), ispunct), sentence.end());
        sentences[i]->sentence = sentence;
    }
    poem->sentences = sentences;
    return poem;
}

void poem_free(Poem *poem) {
    delete poem;
}

bool poem_is_palindrome(Poem *poem) {
    std::vector<Sentence *> reversed_sentences;
    for (int i = poem->sentences.size() - 1; i >= 0; i--) {
        reversed_sentences.push_back(poem->sentences[i]);
    }
    for (int i = 0; i < poem->sentences.size(); i++) {
        if (poem->sentences[i]->sentence != reversed_sentences[i]->sentence) {
            return false;
        }
    }
    return true;
}
