#include <algorithm>

#include "reverse_text.hpp"

ReverseText *reverse_text_new(std::string text) {
    ReverseText *r = (ReverseText *)malloc(sizeof(ReverseText));
    r->text = text;
    return r;
}

void reverse_text_free(ReverseText *reverse_text) {
    free(reverse_text);
}

std::string reverse_text_get(ReverseText *reverse_text) {
    std::string text_copy = reverse_text->text;
    std::transform(text_copy.begin(), text_copy.end(), text_copy.begin(), ::tolower);
    std::reverse(text_copy.begin(), text_copy.end());
    return text_copy.c_str();
}
