#ifndef POEM_PALINDROME_HPP
#define POEM_PALINDROME_HPP

#include <string>
#include <vector>

#include "get_sentence.hpp"

typedef struct {
    std::vector<Sentence *> sentences;
} Poem;

Poem *poem_new(std::string file_path);
void poem_free(Poem *poem);
bool line_poem_is_palindrome(Poem *poem);
bool word_poem_is_palindrome(Poem *poem);
bool poem_is_palindrome(Poem *poem);

#endif // POEM_PALINDROME_HPP
