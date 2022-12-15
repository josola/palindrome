#ifndef NUMERICAL_PALINDROME_HPP
#define NUMERICAL_PALINDROME_HPP

typedef struct {
    int number;
} NumericalPalindrome;

NumericalPalindrome *numerical_palindrome_new(int number);
void numerical_palindrome_free(NumericalPalindrome *palindrome);
bool numerical_palindrome_is_palindrome(NumericalPalindrome *palindrome);

#endif // NUMERICAL_PALINDROME_HPP
