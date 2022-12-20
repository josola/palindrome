#include <stdlib.h>
#include <algorithm>

#include "text_palindrome.hpp"
#include "reverse_text.hpp"

Text *text_new(std::string text) {
    Text *t = (Text *)malloc(sizeof(Text));
    t->text = text;
    return t;
}

Text *text_free(Text *text) {
    free(text);
    return nullptr;
}

bool text_is_palindrome(Text *text) {
    ReverseText *reverse_text = reverse_text_new(text->text);
    std::string reversed = reverse_text_get(reverse_text);
    reverse_text = reverse_text_free(reverse_text);
    std::string text_copy = text->text;
    std::transform(text_copy.begin(), text_copy.end(), text_copy.begin(), ::tolower);
    std::transform(reversed.begin(), reversed.end(), reversed.begin(), ::tolower);
    return text_copy == reversed;
}
