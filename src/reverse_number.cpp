#include <stdlib.h>

#include "reverse_number.hpp"

ReverseNumber *reverse_number_new(int number) {
    ReverseNumber *r = (ReverseNumber *)malloc(sizeof(ReverseNumber));
    r->number = number;
    return r;
}

ReverseNumber *reverse_number_free(ReverseNumber *reverse_number) {
    free(reverse_number);
    return nullptr;
}

int reverse_number_get(ReverseNumber *reverse_number) {
    int number = reverse_number->number;
    int reversed = 0;
    while (number > 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }
    return reversed;
}
