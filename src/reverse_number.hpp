#ifndef REVERSE_NUMBER_HPP
#define REVERSE_NUMBER_HPP

typedef struct {
    int number;
} ReverseNumber;

ReverseNumber *reverse_number_new(int number);
ReverseNumber *reverse_number_free(ReverseNumber *reverse_number);
int reverse_number_get(ReverseNumber *reverse_number);

#endif // REVERSE_NUMBER_HPP