#include <stdlib.h>

#include "numerical_palindrome.hpp"
#include "reverse_number.hpp"

NumericalPalindrome *numerical_palindrome_new(int number) {
    NumericalPalindrome *p = (NumericalPalindrome *)malloc(sizeof(NumericalPalindrome));
    p->number = number;
    return p;
}

void numerical_palindrome_free(NumericalPalindrome *palindrome) {
    free(palindrome);
}

bool numerical_palindrome_is_palindrome(NumericalPalindrome *palindrome) {
    ReverseNumber *reverse_number = reverse_number_new(palindrome->number);
    int reversed = reverse_number_get(reverse_number);
    reverse_number_free(reverse_number);
    return palindrome->number == reversed;
}
