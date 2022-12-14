#include "flip_string.hpp"

std::string FlipString::word() const {
    return word_;
}

std::string FlipString::flip_word() const {
    std::string flipped_word = word_;
    std::reverse (begin(flipped_word), end(flipped_word));
    return flipped_word;
}
