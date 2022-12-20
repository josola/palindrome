#include <algorithm>

#include "reverse_text.hpp"

ReverseText *reverse_text_new(std::string text) {
    ReverseText *r = (ReverseText *)malloc(sizeof(ReverseText));
    r->text = text;
    return r;
}

ReverseText *reverse_text_free(ReverseText *reverse_text) {
    free(reverse_text);
    return nullptr;
}

std::string reverse_text_get(ReverseText *reverse_text) {
    std::string text_copy = reverse_text->text;
    std::reverse(text_copy.begin(), text_copy.end());
    return text_copy.c_str();
}
