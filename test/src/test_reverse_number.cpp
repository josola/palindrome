#include "test_reverse_number.hpp"
#include "reverse_number.hpp"

TestReverseNumberNew::TestReverseNumberNew() : Test("Test reverse_number_new") {};

void TestReverseNumberNew::run() {
    ReverseNumber *reverse_number = reverse_number_new(123);
    assert(reverse_number != nullptr);
    assert(reverse_number->number == 123);
    reverse_number = reverse_number_free(reverse_number);
};

TestReverseNumberFree::TestReverseNumberFree() : Test("Test reverse_number_free") {};

void TestReverseNumberFree::run() {
    ReverseNumber *reverse_number = reverse_number_new(123);
    reverse_number = reverse_number_free(reverse_number);
    assert(reverse_number == nullptr);
};

TestReverseNumberGet::TestReverseNumberGet() : Test("Test reverse_number_get") {};

void TestReverseNumberGet::run() {
    ReverseNumber *reverse_number = reverse_number_new(123);
    assert(reverse_number_get(reverse_number) == 321);
    reverse_number = reverse_number_free(reverse_number);
};
