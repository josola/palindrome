#include "test_get_sentence.hpp"
#include "get_sentence.hpp"

TestSentenceNew::TestSentenceNew() : Test("Test sentence_new") {};

void TestSentenceNew::run() {
    std::string sentence_str = "This is a test sentence.";
    Sentence *sentence = sentence_new(sentence_str);
    assert(sentence != nullptr);
    assert(sentence->text == sentence_str);
    assert(sentence->words[0] == "This");
    assert(sentence->words[1] == "is");
    assert(sentence->words[2] == "a");
    assert(sentence->words[3] == "test");
    assert(sentence->words[4] == "sentence.");
    sentence = sentence_free(sentence);
};

TestSentenceFree::TestSentenceFree() : Test("Test sentence_free") {};

void TestSentenceFree::run() {
    Sentence *sentence = sentence_new("This is a test sentence.");
    sentence = sentence_free(sentence);
    assert(sentence == nullptr);
};
