#ifndef TEXT_PALINDROME_HPP
#define TEXT_PALINDROME_HPP

#include <string>

typedef struct {
    std::string text;
} Text;

Text *text_new(std::string text);
Text *text_free(Text *text);
bool text_is_palindrome(Text *text);

#endif // TEXT_PALINDROME_HPP
