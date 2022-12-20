#ifndef GET_SENTENCE_HPP
#define GET_SENTENCE_HPP

#include <string>
#include <vector>

typedef struct {
    std::vector<std::string> words;
    std::string text;
} Sentence;

Sentence *sentence_new(std::string sentence);
Sentence *sentence_free(Sentence *sentence);

#endif // GET_SENTENCE_HPP
