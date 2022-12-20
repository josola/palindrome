#include "test_reverse_text.hpp"
#include "reverse_text.hpp"

TestReverseTextNew::TestReverseTextNew() : Test("Test reverse_text_new") {};

void TestReverseTextNew::run() {
    ReverseText *reverse_text = reverse_text_new("Hello World");
    assert(reverse_text != nullptr);
    assert(reverse_text->text == "Hello World");
    reverse_text = reverse_text_free(reverse_text);
};

TestReverseTextFree::TestReverseTextFree() : Test("Test reverse_text_free") {};

void TestReverseTextFree::run() {
    ReverseText *reverse_text = reverse_text_new("Hello World");
    reverse_text = reverse_text_free(reverse_text);
    assert(reverse_text == nullptr);
};

TestReverseTextGet::TestReverseTextGet() : Test("Test reverse_text_get") {};

void TestReverseTextGet::run() {
    ReverseText *reverse_text = reverse_text_new("Hello World");
    assert(reverse_text_get(reverse_text) == "dlroW olleH");
    reverse_text = reverse_text_free(reverse_text);
};
