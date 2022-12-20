#ifndef REVERSE_TEXT_HPP
#define REVERSE_TEXT_HPP

#include <string>

typedef struct {
    std::string text;
} ReverseText;

ReverseText *reverse_text_new(std::string text);
ReverseText *reverse_text_free(ReverseText *reverse_text);
std::string reverse_text_get(ReverseText *reverse_text);

#endif // REVERSE_TEXT_HPP
