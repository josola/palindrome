#ifndef GET_SENTENCE_HPP
#define GET_SENTENCE_HPP

#include <string>
#include <vector>

typedef struct {
    std::vector<std::string> words;
    std::string sentence;
} Sentence;

Sentence *sentence_new(std::string sentence);
void sentence_free(Sentence *sentence);

#endif // GET_SENTENCE_HPP
