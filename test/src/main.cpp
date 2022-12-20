#include "test_suite.hpp"
#include "test_get_sentence.hpp"
#include "test_numerical_palindrome.hpp"
#include "test_parse_args.hpp"
#include "test_poem_palindrome.hpp"
#include "test_reverse_number.hpp"
#include "test_reverse_text.hpp"
#include "test_sentence_palindrome.hpp"
#include "test_text_palindrome.hpp"

int main() {
    TestSuite suite;
    suite.add(new TestSentenceNew());
    suite.add(new TestSentenceFree());
    suite.add(new TestNumericalPalindromeNew());
    suite.add(new TestNumericalPalindromeFree());
    suite.add(new TestNumericalPalindromeIsPalindrome());
    suite.add(new TestProgramNew());
    suite.add(new TestProgramFree());
    suite.add(new TestProgramAddCommand());
    suite.add(new TestProgramPrintHelp());
    suite.add(new TestProgramParseArgs());
    suite.add(new TestPoemNew());
    suite.add(new TestPoemFree());
    suite.add(new TestLinePoemIsPalindrome());
    suite.add(new TestWordPoemIsPalindrome());
    suite.add(new TestPoemIsPalindrome());
    suite.add(new TestReverseNumberNew());
    suite.add(new TestReverseNumberFree());
    suite.add(new TestReverseNumberGet());
    suite.add(new TestReverseTextNew());
    suite.add(new TestReverseTextFree());
    suite.add(new TestReverseTextGet());
    suite.add(new TestSentencePalindromeNew());
    suite.add(new TestSentencePalindromeFree());
    suite.add(new TestSentencePalindromeIsPalindrome());
    suite.add(new TestTextNew());
    suite.add(new TestTextFree());
    suite.add(new TestTextIsPalindrome());
    suite.run();
    return 0;
};
