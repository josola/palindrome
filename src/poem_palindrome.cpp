#include <algorithm>
#include <fstream>
#include <iostream>

#include "poem_palindrome.hpp"

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
        std::string sentence = sentences[i]->text;
        sentence.erase(std::remove_if(sentence.begin(), sentence.end(), ispunct), sentence.end());
        sentences[i]->text = sentence;
    }
    poem->filename = file_path.substr(file_path.find_last_of("/") + 1);
    poem->sentences = sentences;
    return poem;
}

Poem *poem_free(Poem *poem) {
    free(poem);
    return nullptr;
}

bool line_poem_is_palindrome(Poem *poem) {
    bool is_palindrome = true;
    for (int i = 0; i < poem->sentences.size() / 2; i++) {
        if (poem->sentences[i]->text != poem->sentences[poem->sentences.size() - i - 1]->text) {
            is_palindrome = false;
            break;
        }
    }
    return is_palindrome;
}

bool word_poem_is_palindrome(Poem *poem) {
    std::vector<std::string> words;
    for (int i = 0; i < poem->sentences.size(); i++) {
        std::string sentence = poem->sentences[i]->text;
        std::string word = "";
        for (int j = 0; j < sentence.length(); j++) {
            if (sentence[j] == ' ') {
                words.push_back(word);
                word = "";
            } else {
                word += sentence[j];
            }
        }
        words.push_back(word);
    }
    for (int i = 0; i < words.size(); i++) {
        std::transform(words[i].begin(), words[i].end(), words[i].begin(), ::tolower);
    }
    std::vector<std::string> reversed_words = words;
    std::reverse(reversed_words.begin(), reversed_words.end());
    bool is_palindrome = reversed_words == words;
    return is_palindrome;
}

bool poem_is_palindrome(Poem *poem) {
    bool is_palindrome = line_poem_is_palindrome(poem) || word_poem_is_palindrome(poem);
    return is_palindrome;
}
